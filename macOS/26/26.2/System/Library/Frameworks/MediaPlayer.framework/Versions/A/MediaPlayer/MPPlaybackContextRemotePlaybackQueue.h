@class MPPlaybackContext;

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {
    MPPlaybackContext *_playbackContext;
    long long _replaceIntent;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)isRequestingImmediatePlayback;
- (long long)replaceIntent;
- (void)setReplaceIntent:(long long)a0;
- (id)asMusicPlaybackContextWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)initWithPlaybackContext:(id)a0;
- (id)privateListeningOverride;
- (id)siriAssetInfo;
- (id)siriRecommendationIdentifier;
- (id)siriWHAMetricsInfo;

@end
