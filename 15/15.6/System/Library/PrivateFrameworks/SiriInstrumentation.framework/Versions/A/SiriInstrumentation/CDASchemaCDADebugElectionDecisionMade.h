@class NSArray, NSData;

@interface CDASchemaCDADebugElectionDecisionMade : SISchemaInstrumentationMessage {
    struct { unsigned char isCrossDeviceArbitrationAllowed : 1; unsigned char deviceGroup : 1; } _has;
}

@property (nonatomic) char isCrossDeviceArbitrationAllowed;
@property (nonatomic) char hasIsCrossDeviceArbitrationAllowed;
@property (copy, nonatomic) NSArray *advertisementDatas;
@property (nonatomic) unsigned int deviceGroup;
@property (nonatomic) char hasDeviceGroup;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addAdvertisementData:(id)a0;
- (id)advertisementDataAtIndex:(unsigned long long)a0;
- (unsigned long long)advertisementDataCount;
- (void)clearAdvertisementData;
- (void)deleteAdvertisementData;
- (void)deleteDeviceGroup;
- (void)deleteIsCrossDeviceArbitrationAllowed;
- (id)suppressMessageUnderConditions;

@end
