@class NSURL, NSString;

@interface IKSlideshowQL : IKSlideshowElement <QLPreviewItem>

@property (readonly) NSURL *previewItemURL;
@property (readonly) NSString *previewItemTitle;
@property (readonly) id previewItemDisplayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGImage { } *)thumbnail;
- (void)setThumbnail:(struct CGImage { } *)a0;
- (void)load:(BOOL)a0;
- (void)loadThumbnail:(BOOL)a0 currentCount:(unsigned long long)a1;
- (void)setMarkedForExport:(BOOL)a0;
- (void)loadThumbnailIfNeeded;
- (void)loadThumbnail:(BOOL)a0;

@end
