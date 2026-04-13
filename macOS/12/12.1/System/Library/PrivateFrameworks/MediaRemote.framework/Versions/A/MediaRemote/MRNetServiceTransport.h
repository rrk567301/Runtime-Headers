@class MRDeviceInfo, NSNetService;

@interface MRNetServiceTransport : MRExternalDeviceTransport {
    MRDeviceInfo *_deviceInfo;
    BOOL _requiresCustomPairing;
}

@property (retain, nonatomic) NSNetService *netService;
@property (nonatomic) BOOL requiresCustomPairing;

+ (id)createDeviceInfoFromTXTRecord:(id)a0;
+ (id)createDeviceInfoFromNetService:(id)a0;

- (void)dealloc;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)error;
- (long long)port;
- (long long)connectionType;
- (void)reset;
- (id)hostname;
- (id)deviceInfo;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (id)createConnectionWithUserInfo:(id)a0;
- (BOOL)getInputStream:(id *)a0 outputStream:(id *)a1 userInfo:(id)a2;
- (void)updateDeviceInfoWithTXTRecord:(id)a0;
- (id)initWithNetService:(id)a0;

@end
