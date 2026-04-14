@class NSUUID, UARPDeviceManager, NSObject, NSMutableArray;
@protocol OS_os_log;

@interface UARPDeviceEndpoint : NSObject {
    NSObject<OS_os_log> *_log;
    UARPDeviceManager *_deviceManager;
    NSMutableArray *_endpoints;
}

@property (readonly) NSUUID *uuid;

- (id)endpoints;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (void)addEndpointConfiguration:(id)a0;
- (id)initWithDeviceManager:(id)a0 uuid:(id)a1;

@end
