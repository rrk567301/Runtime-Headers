@class NSString, AVOutputDevice, MRAirPlayTransportConnection, NSError, NSObject, _MRDeviceInfoMessageProtobuf;
@protocol OS_dispatch_queue;

@interface MRAVOutputDeviceTransport : MRExternalDeviceTransport {
    NSObject<OS_dispatch_queue> *_workerQueue;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    NSError *_error;
    MRAirPlayTransportConnection *_connection;
    BOOL _useSystemAuthenticationPrompt;
    NSString *_outputDeviceUID;
    NSString *_groupID;
    AVOutputDevice *_avOutputDevice;
}

+ (id)_createConnectionWith:(id)a0 groupID:(id)a1 connectionType:(long long)a2 shouldUseSystemAuthenticationPrompt:(BOOL)a3 userInfo:(id)a4;

- (id)uid;
- (id)hostname;
- (id)debugDescription;
- (void)resetWithError:(id)a0;
- (id)deviceInfo;
- (id)initWithOutputDeviceUID:(id)a0;
- (id)description;
- (void)setError:(id)a0;
- (id)name;
- (id)error;
- (long long)port;
- (void).cxx_destruct;
- (id)createConnectionWithUserInfo:(id)a0;
- (id)initWithOutputDevice:(id)a0 groupID:(id)a1 connectionType:(long long)a2;
- (BOOL)requiresCustomPairing;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (BOOL)shouldUseSystemAuthenticationPrompt;

@end
