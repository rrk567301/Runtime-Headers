@class NSString, NSData;

@interface SADSchemaSADTrialRollout : SISchemaInstrumentationMessage {
    struct { unsigned char deployment : 1; } _has;
}

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) char hasRolloutId;
@property (nonatomic) unsigned int deployment;
@property (nonatomic) char hasDeployment;
@property (copy, nonatomic) NSString *factorPack;
@property (nonatomic) char hasFactorPack;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRolloutId;
- (void)deleteDeployment;
- (void)deleteFactorPack;
- (id)suppressMessageUnderConditions;

@end
