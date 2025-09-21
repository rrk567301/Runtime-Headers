@class NSArray, NSString, _SFPBImage, _SFPBRichText, _SFPBColor, NSData;

@interface _SFPBSocialMediaPostCardSection : PBCodable <_SFPBSocialMediaPostCardSection, NSSecureCoding>

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
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char nameNoWrap;
@property (nonatomic) int nameMaxLines;
@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) _SFPBImage *verifiedGlyph;
@property (retain, nonatomic) _SFPBImage *profilePicture;
@property (retain, nonatomic) _SFPBRichText *post;
@property (retain, nonatomic) _SFPBImage *picture;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSString *footnote;
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
