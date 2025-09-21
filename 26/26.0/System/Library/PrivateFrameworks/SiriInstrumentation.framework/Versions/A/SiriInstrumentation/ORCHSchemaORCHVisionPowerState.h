@class NSData;

@interface ORCHSchemaORCHVisionPowerState : SISchemaInstrumentationMessage {
    struct { unsigned char blackboardUseCaseProfile : 1; unsigned char thermalMitigationLevel : 1; } _has;
}

@property (nonatomic) int blackboardUseCaseProfile;
@property (nonatomic) BOOL hasBlackboardUseCaseProfile;
@property (nonatomic) int thermalMitigationLevel;
@property (nonatomic) BOOL hasThermalMitigationLevel;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteBlackboardUseCaseProfile;
- (void)deleteThermalMitigationLevel;

@end
