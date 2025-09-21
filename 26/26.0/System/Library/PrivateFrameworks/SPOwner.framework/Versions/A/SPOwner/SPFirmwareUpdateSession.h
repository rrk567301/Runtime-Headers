@class FMFuture, NSString, FMXPCSession, NSObject;
@protocol OS_dispatch_queue;

@interface SPFirmwareUpdateSession : NSObject <SPFirmwareUpdateSessionPrivateProtocol>

@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMFuture *sessionInvalidationFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)proxy;
- (id)serviceDescription;
- (id)init;
- (id)remoteInterface;
- (void).cxx_destruct;

@end
