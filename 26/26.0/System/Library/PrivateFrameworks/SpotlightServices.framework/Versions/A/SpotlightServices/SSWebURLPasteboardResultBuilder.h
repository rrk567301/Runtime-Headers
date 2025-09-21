@class NSURL, NSString, NSData;

@interface SSWebURLPasteboardResultBuilder : SSPasteboardResultBuilder

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSData *thumbnailData;

+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildShareItems;
- (id)buildCopyItems;
- (id)buildPreviewButtonItems;
- (id)buildTitle;
- (id)pasteboardDescription;

@end
