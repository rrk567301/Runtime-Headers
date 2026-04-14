@class NSUUID, NSObject;
@protocol OS_nw_endpoint;

@interface AVCustomDeviceRoute : NSObject

@property (retain, nonatomic) NSObject<OS_nw_endpoint> *networkEndpoint;
@property (retain, nonatomic) NSUUID *bluetoothIdentifier;
@property (nonatomic, getter=isActive) BOOL active;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
