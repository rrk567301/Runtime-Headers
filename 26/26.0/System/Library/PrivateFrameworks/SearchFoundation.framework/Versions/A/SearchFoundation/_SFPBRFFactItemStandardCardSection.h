@class NSArray, NSString, NSData, _SFPBRFTextProperty, _SFPBRFVisualProperty;

@interface _SFPBRFFactItemStandardCardSection : PBCodable <_SFPBRFFactItemStandardCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFTextProperty *text_1;
@property (retain, nonatomic) _SFPBRFTextProperty *text_2;
@property (retain, nonatomic) _SFPBRFTextProperty *text_3;
@property (copy, nonatomic) NSArray *text_4s;
@property (copy, nonatomic) NSArray *text_5s;
@property (retain, nonatomic) _SFPBRFVisualProperty *thumbnail;
@property (retain, nonatomic) _SFPBRFVisualProperty *thumbnail2;
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
- (void)addText_4:(id)a0;
- (void)addText_5:(id)a0;
- (void)clearText_4;
- (void)clearText_5;
- (void)setText_4:(id)a0;
- (void)setText_5:(id)a0;
- (id)text_4AtIndex:(unsigned long long)a0;
- (unsigned long long)text_4Count;
- (id)text_5AtIndex:(unsigned long long)a0;
- (unsigned long long)text_5Count;

@end
