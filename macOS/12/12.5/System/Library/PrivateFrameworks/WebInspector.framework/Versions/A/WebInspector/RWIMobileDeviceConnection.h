@class NSString;

@interface RWIMobileDeviceConnection : NSObject

@property (readonly, nonatomic) struct _AMDevice { } *deviceRef;
@property (readonly, nonatomic) long long interfaceType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic, getter=isWired) BOOL wired;
@property (readonly, nonatomic, getter=isWireless) BOOL wireless;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_connect;
- (BOOL)_disconnect;
- (id)loggingIdentifier;
- (void)deviceQueue_performWithSession:(id /* block */)a0;
- (id)initWithMobileDeviceRef:(struct _AMDevice { } *)a0;
- (BOOL)_startSession;
- (BOOL)deviceQueue_stopSession;
- (BOOL)_stopSession;
- (BOOL)deviceQueue_startSession;

@end
