@class NSObject;
@protocol OS_dispatch_queue;

@interface GCIONotificationPort : NSObject

@property (readonly) struct IONotificationPort { } *port;
@property (readonly) unsigned int wakePort;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithQueue:(id)a0;
- (id)description;
- (void)dealloc;
- (id)debugDescription;
- (id)redactedDescription;
- (id)init;
- (void)addCancellationHandler:(id /* block */)a0 onQueue:(id)a1;
- (id)initWithMainPort:(unsigned int)a0;
- (id)initWithMainPort:(unsigned int)a0 queue:(id)a1;

@end
