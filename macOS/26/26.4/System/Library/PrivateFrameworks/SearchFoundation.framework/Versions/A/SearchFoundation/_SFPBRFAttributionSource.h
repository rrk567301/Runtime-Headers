@class _SFPBRFAttribution, _SFPBCardSection, NSString, NSData, _SFPBRFVisualProperty;

@interface _SFPBRFAttributionSource : PBCodable <_SFPBRFAttributionSource, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFAttribution *attribution;
@property (retain, nonatomic) _SFPBCardSection *card_section;
@property (retain, nonatomic) _SFPBRFVisualProperty *thumbnail;
@property (copy, nonatomic) NSString *text_1;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
