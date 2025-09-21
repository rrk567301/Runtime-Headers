@interface VFXARKitHandTracker : NSObject

@property (copy, nonatomic) id /* block */ updater;

- (void)start;
- (void)dealloc;
- (void)stop;
- (id)init;

@end
