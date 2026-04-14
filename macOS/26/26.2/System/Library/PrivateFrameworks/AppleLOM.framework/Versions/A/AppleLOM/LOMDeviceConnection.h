@class LOMDeviceServer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface LOMDeviceConnection : NSObject

@property (weak, nonatomic) LOMDeviceServer *delegate;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSString *serviceName;

- (void)cancel;
- (id)handleRequest:(id)a0;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)activate;

@end
