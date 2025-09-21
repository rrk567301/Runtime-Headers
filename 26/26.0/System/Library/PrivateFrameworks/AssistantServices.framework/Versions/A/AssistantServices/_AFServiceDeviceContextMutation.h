@class NSString, NSUUID, NSDictionary, AFServiceDeviceContext;

@interface _AFServiceDeviceContextMutation : NSObject <AFServiceDeviceContextMutating> {
    AFServiceDeviceContext *_base;
    NSUUID *_identifier;
    NSString *_assistantIdentifier;
    NSString *_mediaSystemIdentifier;
    NSString *_mediaRouteIdentifier;
    NSString *_sharedUserID;
    NSString *_roomName;
    long long _proximity;
    NSDictionary *_serializedContextByKey;
    NSDictionary *_metricsContext;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIdentifier : 1; unsigned char hasAssistantIdentifier : 1; unsigned char hasMediaSystemIdentifier : 1; unsigned char hasMediaRouteIdentifier : 1; unsigned char hasSharedUserID : 1; unsigned char hasRoomName : 1; unsigned char hasProximity : 1; unsigned char hasSerializedContextByKey : 1; unsigned char hasMetricsContext : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (void)setMediaRouteIdentifier:(id)a0;
- (id)getIdentifier;
- (BOOL)isDirty;
- (id)getMediaSystemIdentifier;
- (void)setAssistantIdentifier:(id)a0;
- (void)setRoomName:(id)a0;
- (id)getMediaRouteIdentifier;
- (void)setProximity:(long long)a0;
- (id)getAssistantIdentifier;
- (id)getRoomName;
- (void)setIdentifier:(id)a0;
- (void)setMediaSystemIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)setMetricsContext:(id)a0;
- (void)setSharedUserID:(id)a0;
- (id)getSharedUserID;
- (id)getMetricsContext;
- (long long)getProximity;
- (id)getSerializedContextByKey;
- (void)setSerializedContextByKey:(id)a0;

@end
