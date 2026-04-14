@class NSUUID, NSString, NSMutableDictionary, STActivityAttribution;

@interface CMIOExtensionClient : NSObject <NSCopying> {
    struct { unsigned int val[8]; } _auditToken;
    STActivityAttribution *_stAttribution;
    BOOL _isToProxy;
    BOOL _isFromProxyExtensionManager;
    long long _microphoneAuthorizationStatus;
    long long _cameraAuthorizationStatus;
    BOOL _hasPendingMicrophoneAuthorizationRequest;
    BOOL _hasPendingCameraAuthorizationRequest;
    NSString *_description;
    NSString *_redactedDescription;
    NSMutableDictionary *_stCameraCaptureAttributionsMap;
}

@property (readonly, copy) NSUUID *clientID;
@property (readonly, copy) NSString *signingID;
@property (readonly) int pid;

+ (id)clientInfoWithPID:(int)a0 clientID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 stAttribution:(id)a3 isToProxy:(BOOL)a4 isFromProxyExtensionManager:(BOOL)a5;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;
- (struct { unsigned int x0[8]; })auditToken;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyXPCDictionary;
- (id)initWithPID:(int)a0 clientID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 stAttribution:(id)a3 isToProxy:(BOOL)a4 isFromProxyExtensionManager:(BOOL)a5;
- (id)stAttribution;
- (id)stCameraCaptureAttributionsMap;
- (BOOL)isToProxy;
- (BOOL)isFromProxyExtensionManager;
- (long long)microphoneAuthorizationStatus;
- (void)setMicrophoneAuthorizationStatus:(long long)a0;
- (long long)cameraAuthorizationStatus;
- (void)setCameraAuthorizationStatus:(long long)a0;
- (BOOL)hasPendingMicrophoneAuthorizationRequest;
- (void)setHasPendingMicrophoneAuthorizationRequest:(BOOL)a0;
- (BOOL)hasPendingCameraAuthorizationRequest;
- (void)setHasPendingCameraAuthorizationRequest:(BOOL)a0;
- (long long)authorizationStatusForMediaType:(unsigned int)a0;
- (void)requestAccessForMediaType:(unsigned int)a0 reply:(id /* block */)a1;

@end
