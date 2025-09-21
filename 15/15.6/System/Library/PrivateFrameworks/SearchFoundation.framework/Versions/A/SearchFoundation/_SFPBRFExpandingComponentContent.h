@class NSString, _SFPBRFLongItemStandardCardSection, NSData, _SFPBRFReferenceFootnoteCardSection;

@interface _SFPBRFExpandingComponentContent : PBCodable <_SFPBRFExpandingComponentContent, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFLongItemStandardCardSection *long_item_standard_card_section;
@property (retain, nonatomic) _SFPBRFReferenceFootnoteCardSection *reference_footnote_card_section;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichValue;
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

@end
