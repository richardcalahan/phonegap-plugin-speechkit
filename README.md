#Phonegap Plugin: SpeechKit

**Currently only supports iOS**

### Installation

**1. Register for NDEV Mobile SDK**

You can create an application on the NDEV portal and download the iOS SpeechKit.framework  [here](http://nuancemobiledeveloper.com/public/index.php?task=home). 


**2. Install plugin**

    cordova plugin add https://github.com/richardcalahan/cordova-plugin-speechkit.git
    
**3. Verify Compile Sources**    

XCode should automatically update *Build Settings -> Compile Sources* when new source files (.m) are added to the project. In the event XCode missed these additions, add **SpeechKitPlugin.m** and **Credentials.m** to the list.  

**4. Install Speechkit.framework and dependencies**

In *Build Settings > Link Binary With Libraries* add **Speechkit.framework** downloaded in step 1 to the list. In addition, the following framework dependencies must be added:

* System Configuration
* Audio Toolbox
* CFNetwork
* AVFoundation
* Security frameworks


**5. Verify target architectures** 

Ensure the target architectures are explicitly defined as the following for your root project's target *and* the dependent Cordova project's target:

* i386
* armv7
* armv7s

**6. Add Credentials**

Add your NDEV Mobile SDK AppKey and AppID to the `Credentials.m` source file in the Plugins group.
    

### Usage

**Initialize**

    var credentialsClass = "Credentials", 
        host             = "[server-host]",
        port             = 443,
        enableSSL        = false,
        success          = function(result) {},
        error            = function(result) {};
        
    var speechKit = new SpeechKit(
        'Credentials',   
        host, 
        port, 
        enableSSL,   
        success, 
        error
    );

**Speech Recognition**

    var type     = "dictation", 
        language = "en_US", 
        success  = function(result) {},
        error    = function(result) {};
        
    speechKit.startRecognition(
        type, 
        language, 
        success, 
        error 
    );
    
**Stop Speech Recognition**

    var success  = function(result) {},
        error    = function(result) {};
        
    speechKit.stopRecognition(
        success, 
        error
    );
