@class NSData;

@interface FLOWSchemaFLOWholeHouseAudioDestinationContext : SISchemaInstrumentationMessage {
    struct { unsigned char eligibleDeviceCount : 1; unsigned char deviceSuccessCount : 1; } _has;
}

@property (nonatomic) unsigned int eligibleDeviceCount;
@property (nonatomic) char hasEligibleDeviceCount;
@property (nonatomic) unsigned int deviceSuccessCount;
@property (nonatomic) char hasDeviceSuccessCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDeviceSuccessCount;
- (void)deleteEligibleDeviceCount;
- (id)suppressMessageUnderConditions;

@end
