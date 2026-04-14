@class MRDeviceInfo, MRExternalDeviceTransportConnection;

@interface MRExternalDeviceTransportConnectionHandle : NSObject

@property (readonly, nonatomic) MRExternalDeviceTransportConnection *connection;
@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;

- (void).cxx_destruct;
- (id)description;
- (id)initWithConnection:(id)a0 deviceInfo:(id)a1;

@end
