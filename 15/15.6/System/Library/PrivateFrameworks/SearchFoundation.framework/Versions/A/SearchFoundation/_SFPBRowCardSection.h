@class NSArray, NSString, _SFPBImage, _SFPBRichText, _SFPBColor, NSData;

@interface _SFPBRowCardSection : PBCodable <_SFPBRowCardSection, NSSecureCoding>

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
@property (retain, nonatomic) _SFPBImage *image;
@property (nonatomic) char imageIsRightAligned;
@property (retain, nonatomic) _SFPBRichText *leadingText;
@property (retain, nonatomic) _SFPBRichText *trailingText;
@property (retain, nonatomic) _SFPBImage *attributionImage;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) char keyNoWrap;
@property (nonatomic) int keyWeight;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) char valueNoWrap;
@property (nonatomic) int valueWeight;
@property (nonatomic) char cardPaddingBottom;
@property (retain, nonatomic) _SFPBRichText *leadingSubtitle;
@property (retain, nonatomic) _SFPBRichText *trailingSubtitle;
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
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)addPunchoutOptions:(id)a0;
- (void)clearPunchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)punchoutOptionsCount;

@end
