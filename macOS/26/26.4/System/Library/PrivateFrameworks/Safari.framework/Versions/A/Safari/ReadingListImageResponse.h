@class NSImage, ReadingListItem;

@interface ReadingListImageResponse : WBSSiteMetadataResponse

@property (readonly, nonatomic) ReadingListItem *readingListItem;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) BOOL isThumbnail;
@property (readonly, nonatomic) BOOL isGenerated;

- (void).cxx_destruct;
- (id)initWithReadingListItem:(id)a0 image:(id)a1 isThumbnail:(BOOL)a2 isGenerated:(BOOL)a3;

@end
