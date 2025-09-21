@class NSUUID, NSString, NSMutableDictionary, STActivityAttribution;

@interface CMIOExtensionClient : NSObject <NSCopying> {
    struct { unsigned int val[8]; } _auditToken;
    STActivityAttribution *_stAttribution;
    char _isToProxy;
    char _isFromProxyExtensionManager;
    long long _microphoneAuthorizationStatus;
    long long _cameraAuthorizationStatus;
    char _hasPendingMicrophoneAuthorizationRequest;
    char _hasPendingCameraAuthorizationRequest;
    NSString *_description;
    NSString *_redactedDescription;
    NSMutableDictionary *_stCameraCaptureAttributionsMap;
}

@property (readonly, copy) NSUUID *clientID;
@property (readonly, copy) NSString *signingID;
@property (readonly) int pid;

+ (id)clientInfoWithPID:(int)a0 clientID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 stAttribution:(id)a3 isToProxy:(char)a4 isFromProxyExtensionManager:(char)a5;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (id)redactedDescription;
- (id)initWithXPCDictionary:(id)a0;
- (long long)authorizationStatusForMediaType:(unsigned int)a0;
- (long long)cameraAuthorizationStatus;
- (id)copyXPCDictionary;
- (char)hasPendingCameraAuthorizationRequest;
- (char)hasPendingMicrophoneAuthorizationRequest;
- (id)initWithPID:(int)a0 clientID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 stAttribution:(id)a3 isToProxy:(char)a4 isFromProxyExtensionManager:(char)a5;
- (char)isFromProxyExtensionManager;
- (char)isToProxy;
- (long long)microphoneAuthorizationStatus;
- (void)requestAccessForMediaType:(unsigned int)a0 performPreFlightTest:(char)a1 reply:(id /* block */)a2;
- (void)requestAccessForMediaType:(unsigned int)a0 reply:(id /* block */)a1;
- (void)setCameraAuthorizationStatus:(long long)a0;
- (void)setHasPendingCameraAuthorizationRequest:(char)a0;
- (void)setHasPendingMicrophoneAuthorizationRequest:(char)a0;
- (void)setMicrophoneAuthorizationStatus:(long long)a0;
- (id)stAttribution;
- (id)stCameraCaptureAttributionsMap;

@end
