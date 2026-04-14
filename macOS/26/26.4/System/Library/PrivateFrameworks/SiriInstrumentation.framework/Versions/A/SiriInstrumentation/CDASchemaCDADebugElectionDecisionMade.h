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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addAdvertisementData:(id)a0;
- (id)advertisementDataAtIndex:(unsigned long long)a0;
- (unsigned long long)advertisementDataCount;
- (void)clearAdvertisementData;
- (void)deleteAdvertisementData;
- (void)deleteDeviceGroup;
- (void)deleteIsCrossDeviceArbitrationAllowed;

@end
