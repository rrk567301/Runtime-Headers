@interface CMGestureManager : NSObject {
    id _internal;
}

@property (copy) id /* block */ gestureHandler;

+ (void)setGestureServiceEnabled:(BOOL)a0;
+ (BOOL)isGestureServiceEnabled;
+ (BOOL)isGestureServiceAvailable;

- (void)dealloc;
- (id)init;
- (id)initWithPriority:(int)a0;

@end
