@class MPPlaybackContext;

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {
    MPPlaybackContext *_playbackContext;
    long long _replaceIntent;
}

- (id)description;
- (void).cxx_destruct;
- (long long)replaceIntent;
- (void)setReplaceIntent:(long long)a0;
- (id)siriWHAMetricsInfo;
- (BOOL)isRequestingImmediatePlayback;
- (id)siriRecommendationIdentifier;
- (id)siriAssetInfo;
- (id)initWithPlaybackContext:(id)a0;
- (void)getPlaybackContextWithCompletion:(id /* block */)a0;

@end
