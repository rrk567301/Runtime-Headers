@class _SFPBRFSummaryItemAttribution, NSArray, NSString, NSData, _SFPBRFTextProperty, _SFPBRFVisualProperty;

@interface _SFPBRFSummaryItemExpandableCardSection : PBCodable <_SFPBRFSummaryItemExpandableCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFTextProperty *text_1;
@property (retain, nonatomic) _SFPBRFTextProperty *text_2;
@property (retain, nonatomic) _SFPBRFSummaryItemAttribution *attribution;
@property (nonatomic) BOOL attribution_ignores_expansion;
@property (copy, nonatomic) NSArray *expanding_component_contents;
@property (retain, nonatomic) _SFPBRFVisualProperty *thumbnail;
@property (retain, nonatomic) _SFPBRFTextProperty *attribution_caveat;
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
- (void)setExpanding_component_content:(id)a0;
- (void)addExpanding_component_content:(id)a0;
- (void)clearExpanding_component_content;
- (id)expanding_component_contentAtIndex:(unsigned long long)a0;
- (unsigned long long)expanding_component_contentCount;

@end
