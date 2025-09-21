@class NSObject;
@protocol OS_dispatch_queue;

@interface ABDispatchQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id)initWithLabel:(const char *)a0;
- (id)queue;
- (id)q;
- (void)ABDispatchQueueWrapper_commonDealloc;
- (id)initWithLabel:(const char *)a0 attributes:(id)a1;

@end
