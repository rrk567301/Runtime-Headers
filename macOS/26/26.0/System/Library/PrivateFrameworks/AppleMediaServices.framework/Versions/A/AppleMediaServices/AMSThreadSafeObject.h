@interface AMSThreadSafeObject : NSObject

@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain) id underlyingObject;

- (void)setObject:(id)a0;
- (id)initWithObject:(id)a0;
- (void)read:(id /* block */)a0;
- (id)init;
- (id)object;
- (id)accessAndSetObjectWithBlock:(id /* block */)a0;
- (void)readWrite:(id /* block */)a0;
- (void).cxx_destruct;

@end
