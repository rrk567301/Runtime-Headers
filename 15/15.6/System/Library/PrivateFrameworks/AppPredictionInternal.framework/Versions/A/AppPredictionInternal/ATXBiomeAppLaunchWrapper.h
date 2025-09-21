@class BMAppInFocus, NSDate;

@interface ATXBiomeAppLaunchWrapper : NSObject

@property (readonly, nonatomic) char isLocal;
@property (readonly, nonatomic) char isMacPortable;
@property (readonly, nonatomic) char isMacDesktop;
@property (readonly, nonatomic) BMAppInFocus *appLaunchEvent;
@property (readonly, nonatomic) NSDate *launchTimestamp;

- (void).cxx_destruct;
- (id)initWithAppLaunch:(id)a0 isLocal:(char)a1 isMacPortable:(char)a2 isMacDesktop:(char)a3;

@end
