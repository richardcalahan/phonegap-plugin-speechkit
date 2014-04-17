//
//  Credentials.h
//

#import <Foundation/Foundation.h>
#import "ICredentials.h"

@interface Credentials : NSObject <ICredentials> {    
    NSString* appId;
    unsigned char* appKey;    
}

@property (readonly) NSString* appId;
@property (readonly) unsigned char* appKey;
-(NSString *) getAppId;
   
@end
