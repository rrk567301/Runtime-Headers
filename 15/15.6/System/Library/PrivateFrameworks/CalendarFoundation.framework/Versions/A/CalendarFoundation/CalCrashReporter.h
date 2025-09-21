@interface CalCrashReporter : NSObject

@property (class, readonly, nonatomic) char isAvailable;

+ (void)simulateCrashWithMessage:(id)a0;

@end
