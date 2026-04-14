@class PFCopyOnWriteHolder, NSObject;
@protocol OS_dispatch_queue;

@interface PFCopyOnWriteInterest : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue> *_queue;
    PFCopyOnWriteHolder *_holder;
}

@property (copy) id /* block */ copyOnWriteHandler;

- (id)initWithObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)read:(id /* block */)a0;
- (id)description;
- (void)write:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithHolder:(id)a0;
- (id)_copyObject:(id)a0;
- (id)copyWithWrite;

@end
