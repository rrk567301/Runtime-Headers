@class NSLocale;

@interface DMManagerPrivVars : NSObject {
    struct __DASession { } *_clientDefaultDASession;
    id _clientDelegate;
    unsigned int _clientThread;
    unsigned int _bootstrap_MachPort;
    char _sessionUUID[40];
    unsigned long long _dmManagerHash;
    unsigned int _f2t_MachPort;
    unsigned int _t2f_MachPort;
    struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; } *_msgReplyArea;
    struct __CFMachPort { } *_t2f_CFMachPort;
    struct AuthorizationOpaqueRef { } *_implicitAuthorization;
    struct AuthorizationOpaqueRef { } *_explicitAuthorization;
    BOOL _authorizationUIOK;
    NSLocale *_locale;
    BOOL _installEnvironment;
}

@end
