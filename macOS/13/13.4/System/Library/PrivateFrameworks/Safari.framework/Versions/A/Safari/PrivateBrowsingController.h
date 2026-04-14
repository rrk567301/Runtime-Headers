@interface PrivateBrowsingController : NSObject

@property (class, readonly, nonatomic) PrivateBrowsingController *sharedController;

@property (readonly, nonatomic, getter=isEnabledInAnyWindow) BOOL enabledInAnyWindow;

@end
