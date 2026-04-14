@class NSData, _SFPBRFTextProperty, NSString;

@interface _SFPBRFLongItemStandardCardSection : PBCodable <_SFPBRFLongItemStandardCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFTextProperty *text_1;
@property (nonatomic) BOOL is_quote;
@property (nonatomic) BOOL has_background_platter;
@property (nonatomic) BOOL is_fresh;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
