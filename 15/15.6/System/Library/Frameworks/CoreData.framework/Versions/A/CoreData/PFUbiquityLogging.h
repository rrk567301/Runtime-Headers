@interface PFUbiquityLogging : NSObject

@property int desiredLogLevel;

+ (void)initialize;
+ (char)canLogMessageAtLevel:(int)a0;
+ (void)setLoggingLevel:(int)a0;

- (void)dealloc;
- (id)init;
- (void)userDefaultsChanged:(id)a0;

@end
