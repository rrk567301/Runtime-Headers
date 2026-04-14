@interface SOGenericStatusItemCollectionViewItem : SOTranscriptCollectionViewItem

- (void)loadView;
- (void)_updateText;
- (void)_transcriptItemDidChange;
- (id)stringForChatTranscriptItem:(id)a0;
- (void)_configureText;

@end
