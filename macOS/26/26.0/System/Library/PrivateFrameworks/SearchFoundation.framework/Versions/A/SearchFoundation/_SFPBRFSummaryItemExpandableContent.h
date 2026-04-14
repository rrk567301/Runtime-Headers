@class NSString, NSData, _SFPBCommandReference, _SFPBRFSimpleItemRichCardSection;

@interface _SFPBRFSummaryItemExpandableContent : PBCodable <_SFPBRFSummaryItemExpandableContent, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFSimpleItemRichCardSection *simple_item_rich_card_section;
@property (retain, nonatomic) _SFPBCommandReference *command_reference;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichValue;
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
