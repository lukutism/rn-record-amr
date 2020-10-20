#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif

#import <React/RCTLog.h>
#import <AVFoundation/AVFoundation.h>

@interface AudioRecorderManager : NSObject <RCTBridgeModule, AVAudioRecorderDelegate>

@end
