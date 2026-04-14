@class NSData;

@interface FLOWSchemaFLOWholeHouseAudioDestinationContext : SISchemaInstrumentationMessage {
    struct { unsigned char eligibleDeviceCount : 1; unsigned char deviceSuccessCount : 1; } _has;
}

@property (nonatomic) unsigned int eligibleDeviceCount;
@property (nonatomic) BOOL hasEligibleDeviceCount;
@property (nonatomic) unsigned int deviceSuccessCount;
@property (nonatomic) BOOL hasDeviceSuccessCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDeviceSuccessCount;
- (void)deleteEligibleDeviceCount;

@end
