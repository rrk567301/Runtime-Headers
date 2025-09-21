@class NSString, NSData, _SFPBRFTextProperty, _SFPBRFVisualProperty;

@interface _SFPBRFTableCell : PBCodable <_SFPBRFTableCell, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFTextProperty *text;
@property (retain, nonatomic) _SFPBRFVisualProperty *visual;
@property (nonatomic) int column_span;
@property (nonatomic) int horizontal_alignment;
@property (nonatomic) char applySmallCaps;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContent;
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
