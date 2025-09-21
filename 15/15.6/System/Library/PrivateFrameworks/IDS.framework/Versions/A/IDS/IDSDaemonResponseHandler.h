@class NSObject;
@protocol OS_dispatch_queue;

@interface IDSDaemonResponseHandler : NSObject

@property (readonly, nonatomic) id block;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) char isSync;

- (void).cxx_destruct;
- (id)initWithBlock:(id)a0 queue:(id)a1;
- (id)initWithBlock:(id)a0 queue:(id)a1 isSync:(char)a2;

@end
