@class NSData, NSString, NSArray, _SFPBColor, _SFPBButton, _SFPBFormattedText, _SFPBImage, _SFPBRichText, _SFPBActionItem;

@interface _SFPBDetailedRowCardSection : PBCodable <_SFPBDetailedRowCardSection, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) char canBeHidden;
@property (nonatomic) char hasTopPadding;
@property (nonatomic) char hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (retain, nonatomic) _SFPBImage *thumbnail;
@property (nonatomic) char preventThumbnailImageScaling;
@property (retain, nonatomic) _SFPBRichText *title;
@property (retain, nonatomic) _SFPBFormattedText *secondaryTitle;
@property (retain, nonatomic) _SFPBImage *secondaryTitleImage;
@property (nonatomic) char isSecondaryTitleDetached;
@property (copy, nonatomic) NSArray *descriptions;
@property (retain, nonatomic) _SFPBRichText *footnote;
@property (retain, nonatomic) _SFPBFormattedText *trailingTopText;
@property (retain, nonatomic) _SFPBFormattedText *trailingMiddleText;
@property (retain, nonatomic) _SFPBFormattedText *trailingBottomText;
@property (retain, nonatomic) _SFPBActionItem *action;
@property (retain, nonatomic) _SFPBButton *button;
@property (nonatomic) char shouldUseCompactDisplay;
@property (copy, nonatomic) NSArray *buttonItems;
@property (retain, nonatomic) _SFPBImage *trailingThumbnail;
@property (nonatomic) char buttonItemsAreTrailing;
@property (retain, nonatomic) _SFPBRichText *topText;
@property (retain, nonatomic) _SFPBRichText *richTrailingTopText;
@property (retain, nonatomic) _SFPBRichText *richTrailingMiddleText;
@property (retain, nonatomic) _SFPBRichText *richTrailingBottomText;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)buttonItemsCount;
- (void)clearButtonItems;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)addButtonItems:(id)a0;
- (void)addDescriptions:(id)a0;
- (void)addPunchoutOptions:(id)a0;
- (id)buttonItemsAtIndex:(unsigned long long)a0;
- (void)clearDescriptions;
- (void)clearPunchoutOptions;
- (id)descriptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)descriptionsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)punchoutOptionsCount;

@end
