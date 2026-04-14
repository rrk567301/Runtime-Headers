@class NSObject;
@protocol OS_dispatch_queue;

@interface IOKNotificationPort : NSObject

@property (readonly, nonatomic) struct IONotificationPort { } *port;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned int machPort;

- (id)initOnDispatchQueue:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMasterPort:(unsigned int)a0 onDispatchQueue:(id)a1;
- (id)init;

@end
