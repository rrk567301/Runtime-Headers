@class MRDeviceInfo, NSNetService;

@interface MRNetServiceTransport : MRExternalDeviceTransport {
    MRDeviceInfo *_deviceInfo;
    char _requiresCustomPairing;
}

@property (retain, nonatomic) NSNetService *netService;
@property (nonatomic) char requiresCustomPairing;

+ (id)createDeviceInfoFromNetService:(id)a0;
+ (id)createDeviceInfoFromTXTRecord:(id)a0;

- (void)dealloc;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)error;
- (long long)port;
- (long long)connectionType;
- (id)hostname;
- (id)deviceInfo;
- (void)resetWithError:(id)a0;
- (id)createConnectionWithUserInfo:(id)a0;
- (char)getInputStream:(id *)a0 outputStream:(id *)a1 userInfo:(id)a2;
- (id)initWithNetService:(id)a0;
- (void)setShouldUseSystemAuthenticationPrompt:(char)a0;
- (char)shouldUseSystemAuthenticationPrompt;
- (void)updateDeviceInfoWithTXTRecord:(id)a0;

@end
