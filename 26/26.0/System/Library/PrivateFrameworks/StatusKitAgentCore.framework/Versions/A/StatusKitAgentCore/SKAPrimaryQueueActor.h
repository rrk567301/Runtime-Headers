@class OS_dispatch_queue;

@interface SKAPrimaryQueueActor : SwiftNativeNSObject

@property (class, nonatomic, readonly) OS_dispatch_queue *queue;
@property (class, nonatomic, readonly) SKAPrimaryQueueActor *shared;

@end
