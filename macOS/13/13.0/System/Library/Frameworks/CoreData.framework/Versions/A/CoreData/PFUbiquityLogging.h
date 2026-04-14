@interface PFUbiquityLogging : NSObject

@property (nonatomic) int desiredLogLevel;

+ (void)initialize;
+ (void)setLoggingLevel:(int)a0;
+ (BOOL)canLogMessageAtLevel:(int)a0;

- (void)dealloc;
- (id)init;
- (void)userDefaultsChanged:(id)a0;

@end
