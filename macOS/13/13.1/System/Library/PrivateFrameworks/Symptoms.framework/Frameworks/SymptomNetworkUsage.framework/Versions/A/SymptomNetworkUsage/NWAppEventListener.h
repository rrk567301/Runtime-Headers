@class NSObject;
@protocol OS_dispatch_queue;

@interface NWAppEventListener : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
