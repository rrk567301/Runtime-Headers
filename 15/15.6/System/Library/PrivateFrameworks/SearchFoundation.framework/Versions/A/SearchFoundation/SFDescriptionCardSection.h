@class NSURL, NSMutableDictionary, SFColor, SFAppEntityAnnotation, NSDictionary, SFCard, NSString, SFImage, SFCommand, NSArray, NSData, SFText, SFUserReportRequest, NSNumber;

@interface SFDescriptionCardSection : SFTitleCardSection <SFDescriptionCardSection, NSSecureCoding, NSCopying> {
    struct { unsigned char titleNoWrap : 1; unsigned char descriptionExpand : 1; unsigned char imageAlign : 1; unsigned char textAlign : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SFText *descriptionText;
@property (copy, nonatomic) NSString *expandText;
@property (retain, nonatomic) SFImage *image;
@property (nonatomic) char titleNoWrap;
@property (copy, nonatomic) NSNumber *titleWeight;
@property (copy, nonatomic) NSNumber *descriptionSize;
@property (copy, nonatomic) NSNumber *descriptionWeight;
@property (nonatomic) char descriptionExpand;
@property (nonatomic) int imageAlign;
@property (nonatomic) int textAlign;
@property (copy, nonatomic) NSString *attributionText;
@property (copy, nonatomic) NSURL *attributionURL;
@property (retain, nonatomic) SFImage *attributionGlyph;
@property (copy, nonatomic) NSArray *richDescriptions;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) char isCentered;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) char hideDivider;
@property (nonatomic) char canBeHidden;
@property (nonatomic) char hasTopPadding;
@property (nonatomic) char hasBottomPadding;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (nonatomic) char shouldHideInAmbientMode;
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) SFCommand *previewCommand;
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (retain, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) NSString *cardSectionDetail;
@property (retain, nonatomic) NSString *previewButtonItemsTitle;
@property (copy, nonatomic) NSArray *leadingSwipeButtonItems;
@property (copy, nonatomic) NSArray *trailingSwipeButtonItems;
@property (copy, nonatomic) NSArray *referencedCommands;
@property (nonatomic) char forceEnable3DTouch;
@property (nonatomic) char shouldShowInSmartDialog;
@property (copy, nonatomic) NSString *emphasisSubjectId;
@property (nonatomic) int increasedContrastMode;
@property (retain, nonatomic) SFCommand *secondaryCommand;
@property (nonatomic) int requiredLevelOfDetail;
@property (retain, nonatomic) SFAppEntityAnnotation *appEntityAnnotation;
@property (copy, nonatomic) NSString *racFeedbackSubfeatureId;
@property (retain, nonatomic) NSMutableDictionary *racFeedbackLoggingContent;
@property (readonly) NSArray *embeddedCards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (char)hasDescriptionExpand;
- (char)hasImageAlign;
- (char)hasTextAlign;
- (char)hasTitleNoWrap;

@end
