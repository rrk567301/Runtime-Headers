@class NSString, NSArray, SFActionItem, SFImage, SFFormattedText, SFRichText, SFButton, MKSearchFoundationResult;

@interface SearchUIDetailedRowModel : SearchUICardSectionRowModel

@property (retain, nonatomic) SFImage *leadingImage;
@property (retain) SFImage *fallbackImage;
@property (retain) SFButton *leadingButton;
@property char preventThumbnailImageScaling;
@property char isLocalApplicationResult;
@property (retain) NSString *nearbyBusinessesString;
@property (retain) SFRichText *topText;
@property (retain) SFRichText *title;
@property char truncateTitleMiddle;
@property (retain) SFFormattedText *secondaryTitle;
@property char secondaryTitleIsDetached;
@property (retain) SFImage *secondaryTitleImage;
@property (retain, nonatomic) NSArray *details;
@property (retain) SFRichText *footnote;
@property (retain) NSString *footnoteButtonText;
@property (retain) NSString *pinText;
@property (retain) SFActionItem *action;
@property (retain) SFRichText *trailingTopText;
@property (retain) SFRichText *trailingMiddleText;
@property (retain) SFRichText *trailingBottomText;
@property (retain) NSArray *buttonItems;
@property char buttonItemsAreTrailing;
@property (retain) SFImage *trailingThumbnail;
@property (retain) MKSearchFoundationResult *mapsResult;
@property (retain, nonatomic) NSArray *alternateDetails;
@property (retain, nonatomic) SFImage *alternateLeadingImage;
@property (readonly) char truncateDetailsMiddle;
@property (readonly) char useCompactVersionOfUI;
@property (nonatomic) char useAlternateDetails;

+ (char)urlIsDraggable:(id)a0;
+ (id)richTextWithFormattedText:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)backgroundColor;
- (char)isContact;
- (id)contactIdentifiers;
- (id)descriptionText;
- (int)separatorStyle;
- (id)dragAppBundleID;
- (id)dragURL;
- (char)hasLeadingImage;
- (Class)cardSectionViewClass;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (void)fillOutPropertiesForCardSection:(id)a0;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(char)a2 queryId:(unsigned long long)a3 itemIdentifier:(id)a4;
- (id)initWithResult:(id)a0 suggestion:(id)a1 queryId:(unsigned long long)a2 itemIdentifier:(id)a3;
- (char)isTappable;
- (id)populatedMapsCardSectionIfApplicable;
- (id)punchouts;
- (id)richTextFromText:(id)a0;

@end
