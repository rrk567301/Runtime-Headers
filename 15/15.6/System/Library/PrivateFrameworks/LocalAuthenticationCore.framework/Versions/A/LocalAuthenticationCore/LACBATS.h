@interface LACBATS : NSObject

@property (readonly, nonatomic) char wasLaunchedByBATS;
@property (readonly, nonatomic) char isRunningInBATS;

+ (id)sharedInstance;
+ (char)_isBATSEnvironmentSet;

- (id)init;

@end
