@class NSData, NSString;

@interface _SFPBRFTableContentColumnDefinition : PBCodable <_SFPBRFTableContentColumnDefinition, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) float size_percent;
@property (nonatomic) int horizontal_alignment;
@property (nonatomic) int drop_order;
@property (nonatomic) int equal_size_column_group;
@property (nonatomic) char disable_truncation;
@property (nonatomic) char should_drop_in_flow_layout;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
