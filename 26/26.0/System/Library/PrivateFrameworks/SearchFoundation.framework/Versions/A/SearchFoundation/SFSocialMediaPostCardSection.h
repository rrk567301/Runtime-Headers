@class NSMutableDictionary, SFColor, SFAppEntityAnnotation, SFCard, NSDictionary, NSString, SFImage, SFCommand, SFRichText, NSArray, NSData, SFUserReportRequest, NSNumber, SFCopyItem;

@interface SFSocialMediaPostCardSection : SFCardSection <SFSocialMediaPostCardSection, NSSecureCoding, NSCopying> {
    struct { unsigned char nameNoWrap : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL nameNoWrap;
@property (copy, nonatomic) NSNumber *nameMaxLines;
@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) SFImage *verifiedGlyph;
@property (retain, nonatomic) SFImage *profilePicture;
@property (retain, nonatomic) SFRichText *post;
@property (retain, nonatomic) SFImage *picture;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSString *footnote;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) BOOL hideDivider;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (nonatomic) BOOL shouldHideInAmbientMode;
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
@property (nonatomic) BOOL forceEnable3DTouch;
@property (nonatomic) BOOL shouldShowInSmartDialog;
@property (copy, nonatomic) NSString *emphasisSubjectId;
@property (nonatomic) int increasedContrastMode;
@property (retain, nonatomic) SFCommand *secondaryCommand;
@property (nonatomic) int requiredLevelOfDetail;
@property (nonatomic) SFCopyItem *copyableItems;
@property (retain, nonatomic) SFAppEntityAnnotation *appEntityAnnotation;
@property (copy, nonatomic) NSString *racFeedbackSubfeatureId;
@property (retain, nonatomic) NSMutableDictionary *racFeedbackLoggingContent;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly) NSArray *embeddedCards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasNameNoWrap;

@end
