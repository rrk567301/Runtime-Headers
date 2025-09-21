@class NSString, AFAudioSessionCoordinationSystemInfo, NSUUID;

@interface _AFAudioSessionCoordinationSystemInfoMutation : NSObject <AFAudioSessionCoordinationSystemInfoMutating> {
    AFAudioSessionCoordinationSystemInfo *_base;
    char _isSupportedAndEnabled;
    NSString *_homeKitRoomName;
    NSUUID *_homeKitMediaSystemIdentifier;
    NSString *_mediaRemoteGroupIdentifier;
    NSString *_mediaRemoteRouteIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIsSupportedAndEnabled : 1; unsigned char hasHomeKitRoomName : 1; unsigned char hasHomeKitMediaSystemIdentifier : 1; unsigned char hasMediaRemoteGroupIdentifier : 1; unsigned char hasMediaRemoteRouteIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isDirty;
- (id)getHomeKitMediaSystemIdentifier;
- (id)getHomeKitRoomName;
- (char)getIsSupportedAndEnabled;
- (id)getMediaRemoteGroupIdentifier;
- (id)getMediaRemoteRouteIdentifier;
- (id)initWithBase:(id)a0;
- (void)setHomeKitMediaSystemIdentifier:(id)a0;
- (void)setHomeKitRoomName:(id)a0;
- (void)setIsSupportedAndEnabled:(char)a0;
- (void)setMediaRemoteGroupIdentifier:(id)a0;
- (void)setMediaRemoteRouteIdentifier:(id)a0;

@end
