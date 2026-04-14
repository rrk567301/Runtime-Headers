@class NSString, MRAVOutputDevice, MRDeviceInfo, NSError, MRIDSCompanionTransportConnection;

@interface MRIDSCompanionTransport : MRExternalDeviceTransport {
    MRAVOutputDevice *_outputDevice;
    MRIDSCompanionTransportConnection *_connection;
    BOOL _shouldUseSystemAuthenticationPrompt;
    MRDeviceInfo *_deviceInfo;
    NSError *_error;
}

@property (retain, nonatomic) NSString *sessionUID;

- (id)uid;
- (id)hostname;
- (void)resetWithError:(id)a0;
- (void)_handleDeviceConnected:(id)a0;
- (id)deviceInfo;
- (void)_handleDeviceDisconnected:(id)a0;
- (id)initWithOutputDevice:(id)a0;
- (id)name;
- (id)error;
- (long long)port;
- (void).cxx_destruct;
- (id)_generateSessionUID;
- (void)_synchronized_setSessionUID:(id)a0;
- (id)createConnectionWithUserInfo:(id)a0;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (BOOL)supportsIdleDisconnection;

@end
