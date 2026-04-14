@class ReadingListItem;

@interface ReadingListImageRequest : WBSSiteMetadataRequest

@property (readonly, nonatomic) ReadingListItem *readingListItem;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } requiredImageSize;
@property (readonly, nonatomic) BOOL allowDownloadingThumbnail;

- (id)initWithReadingListItem:(id)a0 requiredImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithReadingListItem:(id)a0 requiredImageSize:(struct CGSize { double x0; double x1; })a1 allowDownloadingThumbnail:(BOOL)a2;

@end
