@class NSString, AFMediaPlaybackStateSnapshot, NSDate;

@interface _AFMediaPlaybackStateSnapshotMutation : NSObject <AFMediaPlaybackStateSnapshotMutating> {
    AFMediaPlaybackStateSnapshot *_base;
    long long _playbackState;
    NSDate *_nowPlayingTimestamp;
    NSString *_mediaType;
    NSString *_groupIdentifier;
    BOOL _isProxyGroupPlayer;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasPlaybackState : 1; unsigned char hasNowPlayingTimestamp : 1; unsigned char hasMediaType : 1; unsigned char hasGroupIdentifier : 1; unsigned char hasIsProxyGroupPlayer : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (long long)getPlaybackState;
- (void)setIsProxyGroupPlayer:(BOOL)a0;
- (id)getGroupIdentifier;
- (void)setPlaybackState:(long long)a0;
- (BOOL)isDirty;
- (void)setMediaType:(id)a0;
- (id)getNowPlayingTimestamp;
- (void)setGroupIdentifier:(id)a0;
- (BOOL)getIsProxyGroupPlayer;
- (void)setNowPlayingTimestamp:(id)a0;
- (void).cxx_destruct;
- (id)getMediaType;

@end
