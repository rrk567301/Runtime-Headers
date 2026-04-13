@interface SOMessagePartCollectionViewItem : SOTranscriptCollectionViewItem

- (void)loadView;
- (void)setMaximumWidth:(double)a0;
- (BOOL)wantsTail;
- (long long)fullScreenEffectFilterType;
- (id)balloonView;
- (void)_transcriptItemDidChange;

@end
