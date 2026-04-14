@class MRDeviceInfo, NSNetService;

@interface MRNetServiceTransport : MRExternalDeviceTransport {
    MRDeviceInfo *_deviceInfo;
    BOOL _requiresCustomPairing;
}

@property (retain, nonatomic) NSNetService *netService;
@property (nonatomic) BOOL requiresCustomPairing;

+ (id)createDeviceInfoFromNetService:(id)a0;
+ (id)createDeviceInfoFromTXTRecord:(id)a0;

- (void)dealloc;
- (id)name;
- (id)description;
- (id)error;
- (void).cxx_destruct;
- (long long)port;
- (long long)connectionType;
- (id)hostname;
- (id)deviceInfo;
- (void)resetWithError:(id)a0;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (id)createConnectionWithUserInfo:(id)a0;
- (BOOL)getInputStream:(id *)a0 outputStream:(id *)a1 userInfo:(id)a2;
- (id)initWithNetService:(id)a0;
- (void)updateDeviceInfoWithTXTRecord:(id)a0;

@end
