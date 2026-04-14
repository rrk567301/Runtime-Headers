@interface SOMessagePartCollectionViewItem : SOTranscriptCollectionViewItem

- (void)setMaximumWidth:(double)a0;
- (void)loadView;
- (BOOL)wantsTail;
- (id)balloonView;
- (void)_transcriptItemDidChange;
- (long long)fullScreenEffectFilterType;

@end
