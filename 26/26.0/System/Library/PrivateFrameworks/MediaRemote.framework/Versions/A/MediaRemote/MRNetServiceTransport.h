@class MRDeviceInfo, NSNetService;

@interface MRNetServiceTransport : MRExternalDeviceTransport {
    MRDeviceInfo *_deviceInfo;
    BOOL _requiresCustomPairing;
}

@property (retain, nonatomic) NSNetService *netService;
@property (nonatomic) BOOL requiresCustomPairing;

+ (id)createDeviceInfoFromNetService:(id)a0;
+ (id)createDeviceInfoFromTXTRecord:(id)a0;

- (id)hostname;
- (void)dealloc;
- (void)resetWithError:(id)a0;
- (id)deviceInfo;
- (id)initWithNetService:(id)a0;
- (id)description;
- (id)name;
- (id)error;
- (long long)connectionType;
- (long long)port;
- (void).cxx_destruct;
- (id)createConnectionWithUserInfo:(id)a0;
- (BOOL)getInputStream:(id *)a0 outputStream:(id *)a1 userInfo:(id)a2;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)updateDeviceInfoWithTXTRecord:(id)a0;

@end
