@class _SFPBRFTableContentColumnDefinition, _SFPBRFTableSpacerColumnDefinition, NSString, NSData;

@interface _SFPBRFTableColumnDefinition : PBCodable <_SFPBRFTableColumnDefinition, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFTableSpacerColumnDefinition *spacer;
@property (retain, nonatomic) _SFPBRFTableContentColumnDefinition *content;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDefinition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
