@class NSString, AFASRSharedUserInfo;

@interface _AFASRSharedUserInfoMutation : NSObject <AFASRSharedUserInfoMutating> {
    AFASRSharedUserInfo *_base;
    NSString *_sharedUserId;
    NSString *_loggableSharedUserId;
    NSString *_loggableUserIdHash;
    NSString *_personaId;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSharedUserId : 1; unsigned char hasLoggableSharedUserId : 1; unsigned char hasLoggableUserIdHash : 1; unsigned char hasPersonaId : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void)setPersonaId:(id)a0;
- (void).cxx_destruct;
- (void)setLoggableSharedUserId:(id)a0;
- (void)setSharedUserId:(id)a0;
- (id)getSharedUserId;
- (id)getLoggableSharedUserId;
- (id)getLoggableUserIdHash;
- (id)getPersonaId;
- (void)setLoggableUserIdHash:(id)a0;

@end
