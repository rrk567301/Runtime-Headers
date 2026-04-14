@class _PXStoryFeedInlinePlaybackController;

@interface _PXStoryFeedInlinePlaybackRecord : PXGridInlinePlaybackRecord {
    long long _desiredPlayState;
}

@property (weak, nonatomic) _PXStoryFeedInlinePlaybackController *inlinePlaybackController;

- (void).cxx_destruct;
- (void)setDesiredPlayState:(long long)a0;
- (long long)desiredPlayState;

@end
