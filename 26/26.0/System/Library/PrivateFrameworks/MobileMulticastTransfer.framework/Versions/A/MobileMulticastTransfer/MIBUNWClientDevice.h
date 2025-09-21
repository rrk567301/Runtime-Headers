@class NSString;
@protocol MIBUNWClientDeviceDelegate;

@interface MIBUNWClientDevice : MIBUNWDevice <MIBUNWConnectionDelegate>

@property (readonly, nonatomic) NSString *clientIPv6Address;
@property (readonly, nonatomic) NSString *clientSerialNumber;
@property (weak, nonatomic) id<MIBUNWClientDeviceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNWConnection:(id)a0;
- (void)_checkOutAck;
- (void)unicastConnection:(id)a0 didReceiveMessage:(id)a1;
- (void)unicastConnectionDidClose:(id)a0 withError:(id)a1;
- (void)unicastConnectionDidOpen:(id)a0;

@end
