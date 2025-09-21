@class NSData, NSString, SFAnimatedLockButton, NSDictionary, NSMutableArray, SFAuthorization, NSObject, NSButton;
@protocol OS_dispatch_queue;

@interface SFAuthorizationView_ivars : NSObject {
    SFAnimatedLockButton *_lockIconButton;
    NSButton *_textButton;
    NSString *_textButtonString;
    NSMutableArray *_constraints;
    struct { unsigned int x0; struct *x1; } *_authorizationRights;
    SFAuthorization *_authorization;
    id _delegate;
    int _currentState;
    char _authorized;
    double _timeInterval;
    unsigned int _flags;
    char _initiallyLockedOrHidden;
    NSDictionary *_textAttributes;
    char _asyncOperation;
    NSObject<OS_dispatch_queue> *_interactiveHandlingQueue;
    char _initialized;
    NSData *_lacontext;
}

- (void)dealloc;

@end
