@class NSArray, NSData;

@interface CDASchemaCDADebugElectionDecisionMade : SISchemaInstrumentationMessage {
    struct { unsigned char isCrossDeviceArbitrationAllowed : 1; unsigned char deviceGroup : 1; } _has;
}

@property (nonatomic) BOOL isCrossDeviceArbitrationAllowed;
@property (nonatomic) BOOL hasIsCrossDeviceArbitrationAllowed;
@property (copy, nonatomic) NSArray *advertisementDatas;
@property (nonatomic) unsigned int deviceGroup;
@property (nonatomic) BOOL hasDeviceGroup;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDeviceGroup;
- (void)clearAdvertisementData;
- (void)addAdvertisementData:(id)a0;
- (void)deleteIsCrossDeviceArbitrationAllowed;
- (void)deleteAdvertisementData;
- (unsigned long long)advertisementDataCount;
- (id)advertisementDataAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
