@class NSString, MRAVOutputDevice, MRDeviceInfo, NSError, MRIDSCompanionTransportConnection;

@interface MRIDSCompanionTransport : MRExternalDeviceTransport {
    MRAVOutputDevice *_outputDevice;
    MRIDSCompanionTransportConnection *_connection;
    char _shouldUseSystemAuthenticationPrompt;
    MRDeviceInfo *_deviceInfo;
    NSError *_error;
}

@property (retain, nonatomic) NSString *sessionUID;

- (id)name;
- (void).cxx_destruct;
- (id)error;
- (long long)port;
- (id)uid;
- (id)hostname;
- (void)_handleDeviceConnected:(id)a0;
- (void)_handleDeviceDisconnected:(id)a0;
- (id)deviceInfo;
- (void)resetWithError:(id)a0;
- (id)_generateSessionUID;
- (void)_synchronized_setSessionUID:(id)a0;
- (id)createConnectionWithUserInfo:(id)a0;
- (id)initWithOutputDevice:(id)a0;
- (void)setShouldUseSystemAuthenticationPrompt:(char)a0;
- (char)shouldUseSystemAuthenticationPrompt;
- (char)supportsIdleDisconnection;

@end
