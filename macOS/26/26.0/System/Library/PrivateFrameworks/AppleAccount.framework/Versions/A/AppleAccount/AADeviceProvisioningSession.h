@class NSString;

@interface AADeviceProvisioningSession : NSObject {
    NSString *_dsid;
    unsigned long long _dsidNumber;
    struct OpaqueCFHTTPCookieStorage { } *_cookieStorageRef;
}

- (int)synchronizeProvisioningWithData:(id)a0;
- (id)initWithAccount:(id)a0;
- (void)setCookieStorageRef:(struct OpaqueCFHTTPCookieStorage { } *)a0;
- (id)initWithDSID:(id)a0;
- (id)init;
- (int)eraseProvisioning;
- (int)provisionDeviceWithData:(id)a0;
- (void)addProvisioningInfoToAARequest:(id)a0;
- (id)deviceProvisioningInfo;
- (void)addProvisioningInfoToAARequest:(id)a0 withFallback:(BOOL)a1;
- (void)addProvisioningInfoToURLRequest:(id)a0 sendEmptyValues:(BOOL)a1;
- (void).cxx_destruct;

@end
