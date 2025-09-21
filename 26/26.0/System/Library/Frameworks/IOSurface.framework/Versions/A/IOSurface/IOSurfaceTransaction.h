@class IOSurfaceSharedEvent;

@interface IOSurfaceTransaction : NSObject

@property (readonly) IOSurfaceSharedEvent *event;
@property (readonly) unsigned long long waitValue;
@property (readonly) BOOL isWrite;

- (void)dealloc;
- (id)initWithSharedEvent:(id)a0 waitValue:(unsigned long long)a1 isWrite:(BOOL)a2;
- (id)fromSerialized:(const void *)a0;

@end
