@class NSObject;
@protocol OS_dispatch_queue;

@interface CKVServiceConnection : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithServiceQueue:(id)a0;

@end
