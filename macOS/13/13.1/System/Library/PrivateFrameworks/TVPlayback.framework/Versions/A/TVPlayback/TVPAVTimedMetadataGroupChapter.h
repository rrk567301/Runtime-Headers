@class AVMetadataItem;

@interface TVPAVTimedMetadataGroupChapter : TVPMutableChapter

@property (retain, nonatomic) AVMetadataItem *imageMetadataItem;

- (void).cxx_destruct;
- (id)initWithAVTimedMetadataGroup:(id)a0 filterByLanguages:(id)a1;
- (void)_loadChapterNameFromMetadataItem:(id)a0;

@end
