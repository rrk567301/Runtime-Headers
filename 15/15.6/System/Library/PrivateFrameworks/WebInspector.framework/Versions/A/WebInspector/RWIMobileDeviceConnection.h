@class NSString;

@interface RWIMobileDeviceConnection : NSObject

@property (readonly, nonatomic) struct _AMDevice { } *deviceRef;
@property (readonly, nonatomic) long long interfaceType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isConnected) char connected;
@property (readonly, nonatomic, getter=isWired) char wired;
@property (readonly, nonatomic, getter=isWireless) char wireless;
@property (readonly, nonatomic, getter=isNetworkPairable) char networkPairable;
@property (readonly, nonatomic) NSString *macAddress;
@property (readonly, nonatomic) NSString *networkPairableActualIdentifier;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_disconnect;
- (char)_connect;
- (char)_startSession;
- (id)loggingIdentifier;
- (char)_stopSession;
- (void)deviceQueue_performWithSession:(id /* block */)a0;
- (void)deviceQueue_performWithConnection:(id /* block */)a0;
- (char)deviceQueue_startSession;
- (char)deviceQueue_stopSession;
- (id)initWithMobileDeviceRef:(struct _AMDevice { } *)a0;

@end
