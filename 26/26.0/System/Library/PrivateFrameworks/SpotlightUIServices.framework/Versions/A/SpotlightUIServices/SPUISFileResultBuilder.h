@class NSNumber, NSString, NSDate;

@interface SPUISFileResultBuilder : SPUISResultBuilder

@property (nonatomic) BOOL isFolder;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSNumber *sizeInBytes;
@property (retain, nonatomic) NSNumber *pageCount;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSString *fileProviderId;
@property (retain, nonatomic) NSString *fileProviderDomainId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *kind;
@property (retain, nonatomic) NSString *thumbnailURL;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (struct CGSize { double x0; double x1; })defaultThumbnailSizeIsCompact:(BOOL)a0;
+ (id)stringWithModificationDate:(id)a0 creationDate:(id)a1;
+ (id)stringWithPageCount:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)openFileProviderItemCommand;
- (id)buildAppTopHitEntityCardSection;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildButtonItems;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildCompactCardSection;
- (id)buildDescriptions;
- (id)buildInlineCardSection;
- (id)buildPunchoutCommandForFile;
- (id)buildPunchouts;
- (id)buildThumbnail;

@end
