@class NSUUID, NSString, STActivityAttribution;

@interface CMIOExtensionClient : NSObject <NSCopying> {
    struct { unsigned int val[8]; } _auditToken;
    STActivityAttribution *_stAttribution;
    BOOL _isProxy;
    long long _microphoneAuthorizationStatus;
    long long _cameraAuthorizationStatus;
    BOOL _hasPendingMicrophoneAuthorizationRequest;
    BOOL _hasPendingCameraAuthorizationRequest;
    NSString *_description;
}

@property (readonly, copy) NSUUID *clientID;
@property (readonly) int pid;

+ (id)clientInfoWithPID:(int)a0 clientID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 stAttribution:(id)a3 isProxy:(BOOL)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)isProxy;
- (id)description;
- (struct { unsigned int x0[8]; })auditToken;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithPID:(int)a0 clientID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 stAttribution:(id)a3 isProxy:(BOOL)a4;
- (void)setMicrophoneAuthorizationStatus:(long long)a0;
- (void)setCameraAuthorizationStatus:(long long)a0;
- (id)copyXPCDictionary;
- (id)stAttribution;
- (long long)microphoneAuthorizationStatus;
- (long long)cameraAuthorizationStatus;
- (BOOL)hasPendingMicrophoneAuthorizationRequest;
- (void)requestAccessForMediaType:(unsigned int)a0 reply:(id /* block */)a1;
- (BOOL)hasPendingCameraAuthorizationRequest;
- (long long)authorizationStatusForMediaType:(unsigned int)a0;
- (void)setHasPendingMicrophoneAuthorizationRequest:(BOOL)a0;
- (void)setHasPendingCameraAuthorizationRequest:(BOOL)a0;

@end
