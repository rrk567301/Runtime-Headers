@interface VFXARKitHandTracker : NSObject

@property (copy, nonatomic) id /* block */ updater;

- (void)stop;
- (id)init;
- (void)start;
- (void)dealloc;

@end
