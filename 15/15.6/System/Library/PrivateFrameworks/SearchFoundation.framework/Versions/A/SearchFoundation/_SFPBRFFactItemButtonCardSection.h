@class NSArray, _SFPBButtonItem, NSData, _SFPBRFTextProperty, _SFPBRFVisualProperty, NSString;

@interface _SFPBRFFactItemButtonCardSection : PBCodable <_SFPBRFFactItemButtonCardSection, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFTextProperty *text_1;
@property (retain, nonatomic) _SFPBButtonItem *button_1;
@property (retain, nonatomic) _SFPBButtonItem *button_2;
@property (retain, nonatomic) _SFPBButtonItem *button_3;
@property (retain, nonatomic) _SFPBRFTextProperty *text_2;
@property (retain, nonatomic) _SFPBRFTextProperty *text_3;
@property (copy, nonatomic) NSArray *text_4s;
@property (retain, nonatomic) _SFPBRFTextProperty *text_5;
@property (retain, nonatomic) _SFPBRFVisualProperty *thumbnail;
@property (retain, nonatomic) _SFPBRFVisualProperty *thumbnail2;
@property (nonatomic) char buttonItemsAreBottom;
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
- (void)addText_4:(id)a0;
- (void)clearText_4;
- (void)setText_4:(id)a0;
- (id)text_4AtIndex:(unsigned long long)a0;
- (unsigned long long)text_4Count;

@end
