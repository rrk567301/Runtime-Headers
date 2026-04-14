@class LOMDeviceServer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface LOMDeviceConnection : NSObject

@property (weak, nonatomic) LOMDeviceServer *delegate;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSString *serviceName;

- (id)handleRequest:(id)a0;
- (void)cancel;
- (BOOL)activate;
- (id)initWithServiceName:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
