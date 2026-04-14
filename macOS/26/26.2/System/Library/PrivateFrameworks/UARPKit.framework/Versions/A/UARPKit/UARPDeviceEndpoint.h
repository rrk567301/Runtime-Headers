@class NSUUID, UARPDeviceManager, NSObject, NSMutableArray;
@protocol OS_os_log;

@interface UARPDeviceEndpoint : NSObject {
    NSObject<OS_os_log> *_log;
    UARPDeviceManager *_deviceManager;
    NSMutableArray *_endpoints;
}

@property (readonly) NSUUID *uuid;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)endpoints;
- (void)addEndpointConfiguration:(id)a0;
- (id)initWithDeviceManager:(id)a0 uuid:(id)a1;

@end
