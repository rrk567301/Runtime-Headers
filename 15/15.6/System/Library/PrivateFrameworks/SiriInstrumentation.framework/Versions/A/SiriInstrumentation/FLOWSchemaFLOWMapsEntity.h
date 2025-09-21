@class NSString, NSData;

@interface FLOWSchemaFLOWMapsEntity : SISchemaInstrumentationMessage

@property (nonatomic) unsigned long long muid;
@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long mapsFeatureId;
@property (nonatomic) char hasMapsFeatureId;
@property (copy, nonatomic) NSString *addressId;
@property (nonatomic) char hasAddressId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEntityid;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAddressId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteMapsFeatureId;
- (void)deleteMuid;
- (id)suppressMessageUnderConditions;

@end
