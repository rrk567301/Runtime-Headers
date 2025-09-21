@class NSArray;

@interface SSFilesPasteboardResultBuilder : SSPasteboardResultBuilder

@property (retain, nonatomic) NSArray *fileURLs;

+ (BOOL)supportsResult:(id)a0;
+ (id)typeForURL:(id)a0;
+ (BOOL)shouldHideExtensionForURL:(id)a0;
+ (BOOL)showAllExtensionsPreference;
+ (id)spotlightPasteboardCacheDirectory;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildShareItems;
- (id)buildCopyItems;
- (id)buildDeleteCommand;
- (id)buildPreviewButtonItems;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)pasteboardDescription;

@end
