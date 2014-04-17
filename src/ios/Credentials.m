//
//  Credentials.m
//
//

#import "Credentials.h"

const unsigned char SpeechKitApplicationKey[] = {};

@implementation Credentials 
@synthesize appId, appKey;

NSString* APP_ID = @"";

-(NSString *) getAppId {
    return [NSString stringWithString:APP_ID];
};

@end
