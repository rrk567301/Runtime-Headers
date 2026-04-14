@interface WFEventTracker : NSObject

+ (id)sharedTracker;

- (void)trackEvent:(id)a0;
- (id)init;

@end
