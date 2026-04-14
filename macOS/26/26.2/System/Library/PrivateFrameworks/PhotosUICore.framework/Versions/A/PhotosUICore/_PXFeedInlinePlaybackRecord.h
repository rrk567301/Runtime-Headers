@class _PXFeedInlinePlaybackController;

@interface _PXFeedInlinePlaybackRecord : PXGridInlinePlaybackRecord {
    long long _desiredPlayState;
}

@property (weak, nonatomic) _PXFeedInlinePlaybackController *inlinePlaybackController;

- (void).cxx_destruct;
- (long long)desiredPlayState;
- (id)initWithDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (void)setDesiredPlayState:(long long)a0;

@end
