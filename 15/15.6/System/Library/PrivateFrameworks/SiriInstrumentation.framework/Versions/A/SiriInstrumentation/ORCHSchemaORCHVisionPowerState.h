@class NSData;

@interface ORCHSchemaORCHVisionPowerState : SISchemaInstrumentationMessage {
    struct { unsigned char blackboardUseCaseProfile : 1; unsigned char thermalMitigationLevel : 1; } _has;
}

@property (nonatomic) int blackboardUseCaseProfile;
@property (nonatomic) char hasBlackboardUseCaseProfile;
@property (nonatomic) int thermalMitigationLevel;
@property (nonatomic) char hasThermalMitigationLevel;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBlackboardUseCaseProfile;
- (void)deleteThermalMitigationLevel;
- (id)suppressMessageUnderConditions;

@end
