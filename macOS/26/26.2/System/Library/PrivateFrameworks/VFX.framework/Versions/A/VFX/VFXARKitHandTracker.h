@interface VFXARKitHandTracker : NSObject

@property (copy, nonatomic) id /* block */ updater;

- (void)stop;
- (void)start;
- (id)init;
- (void)dealloc;

@end
