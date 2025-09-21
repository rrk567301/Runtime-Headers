@class NSString;

@interface RWIMobileDeviceConnection : NSObject

@property (readonly, nonatomic) struct _AMDevice { } *deviceRef;
@property (readonly, nonatomic) long long interfaceType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic, getter=isWired) BOOL wired;
@property (readonly, nonatomic, getter=isWireless) BOOL wireless;
@property (readonly, nonatomic, getter=isNetworkPairable) BOOL networkPairable;
@property (readonly, nonatomic) NSString *macAddress;
@property (readonly, nonatomic) NSString *networkPairableActualIdentifier;

- (BOOL)_disconnect;
- (void)dealloc;
- (id)loggingIdentifier;
- (id)description;
- (BOOL)_connect;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_startSession;
- (BOOL)_stopSession;
- (void)deviceQueue_performWithSession:(id /* block */)a0;
- (void)deviceQueue_performWithConnection:(id /* block */)a0;
- (BOOL)deviceQueue_startSession;
- (BOOL)deviceQueue_stopSession;
- (id)initWithMobileDeviceRef:(struct _AMDevice { } *)a0;

@end
