@class NSURL, NSString;

@interface IKSlideshowQL : IKSlideshowElement <QLPreviewItem>

@property (readonly) NSURL *previewItemURL;
@property (readonly) NSString *previewItemTitle;
@property (readonly) id previewItemDisplayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setThumbnail:(struct CGImage { } *)a0;
- (struct CGImage { } *)thumbnail;
- (void)load:(char)a0;
- (void)loadThumbnail:(char)a0;
- (void)loadThumbnail:(char)a0 currentCount:(unsigned long long)a1;
- (void)loadThumbnailIfNeeded;
- (void)setMarkedForExport:(char)a0;

@end
