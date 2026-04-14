@class NSString, UTType, NSDate;

@interface SSPasteboardResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *copiedText;
@property (retain, nonatomic) NSDate *dateCopied;
@property (retain, nonatomic) UTType *contentType;

+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildShareItems;
- (id)buildButtonItems;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildCopyButtonItem;
- (id)buildCopyItem;
- (id)buildCopyItems;
- (id)buildDeleteButtonItem;
- (id)buildDeleteCommand;
- (id)buildDescriptions;
- (id)buildPasteButtonItem;
- (id)buildPasteCommand;
- (id)buildPreviewButtonItems;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)pasteboardDescription;

@end
