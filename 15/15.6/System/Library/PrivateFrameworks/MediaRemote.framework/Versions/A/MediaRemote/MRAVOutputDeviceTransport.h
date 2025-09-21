@class NSString, AVOutputDevice, MRAirPlayTransportConnection, NSError, NSObject, _MRDeviceInfoMessageProtobuf;
@protocol OS_dispatch_queue;

@interface MRAVOutputDeviceTransport : MRExternalDeviceTransport {
    NSObject<OS_dispatch_queue> *_workerQueue;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    NSError *_error;
    MRAirPlayTransportConnection *_connection;
    char _useSystemAuthenticationPrompt;
    NSString *_outputDeviceUID;
    NSString *_groupID;
    AVOutputDevice *_avOutputDevice;
}

+ (id)_createConnectionWith:(id)a0 groupID:(id)a1 connectionType:(long long)a2 shouldUseSystemAuthenticationPrompt:(char)a3 userInfo:(id)a4;

- (id)debugDescription;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)error;
- (long long)port;
- (id)uid;
- (void)setError:(id)a0;
- (id)hostname;
- (id)deviceInfo;
- (void)resetWithError:(id)a0;
- (id)createConnectionWithUserInfo:(id)a0;
- (id)initWithOutputDevice:(id)a0 groupID:(id)a1 connectionType:(long long)a2;
- (id)initWithOutputDeviceUID:(id)a0;
- (char)requiresCustomPairing;
- (void)setShouldUseSystemAuthenticationPrompt:(char)a0;
- (char)shouldUseSystemAuthenticationPrompt;

@end
