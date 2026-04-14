@class AVOutputDeviceAuthorizationSessionInternal;
@protocol AVOutputDeviceAuthorizationSessionDelegate;

@interface AVOutputDeviceAuthorizationSession : NSObject {
    AVOutputDeviceAuthorizationSessionInternal *_ivars;
}

@property (weak) id<AVOutputDeviceAuthorizationSessionDelegate> delegate;

+ (void)initialize;
+ (id)outputDeviceAuthorizationSessionWithEndpointUIAgent:(struct OpaqueFigEndpointUIAgent { } *)a0;
+ (id)sharedAuthorizationSession;

- (id)initWithOutputDeviceAuthorizationSessionImpl:(id)a0;
- (id)impl;
- (void)outputDeviceAuthorizationSessionImpl:(id)a0 didProvideAuthorizationRequest:(id)a1;
- (BOOL)outputDeviceAuthorizationSessionImpl:(id)a0 shouldRetryAuthorizationRequest:(id)a1 reason:(id)a2;
- (void)outputDeviceAuthorizationSessionImplDidExpireWithReplacementImpl:(id)a0;
- (void)dealloc;

@end
