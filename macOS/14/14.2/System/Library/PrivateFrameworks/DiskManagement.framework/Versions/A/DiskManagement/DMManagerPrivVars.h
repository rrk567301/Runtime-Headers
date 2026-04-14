@class NSXPCConnection, SK_DM_Daemon2ClientDelegate, NSPort, NSLocale;
@protocol SK_DM_Client2DaemonProtocol;

@interface DMManagerPrivVars : NSObject {
    struct __DASession { } *_clientDefaultDASession;
    id _clientDelegate;
    unsigned int _clientThread;
    struct AuthorizationOpaqueRef { } *_implicitAuthorization;
    struct AuthorizationOpaqueRef { } *_explicitAuthorization;
    BOOL _authorizationUIOK;
    NSLocale *_locale;
    BOOL _installEnvironment;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id<SK_DM_Client2DaemonProtocol> SK_DM_delegate;
@property (readonly, nonatomic) NSPort *callbackPort;
@property (readonly, nonatomic) SK_DM_Daemon2ClientDelegate *callbackDelegate;

- (void)dealloc;
- (id)initWithDirectConnection:(BOOL)a0;

@end
