@class NSString, NSData;

@interface SADSchemaSADTrialRollout : SISchemaInstrumentationMessage {
    struct { unsigned char deployment : 1; } _has;
}

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) unsigned int deployment;
@property (nonatomic) BOOL hasDeployment;
@property (copy, nonatomic) NSString *factorPack;
@property (nonatomic) BOOL hasFactorPack;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteRolloutId;
- (void)deleteDeployment;
- (void)deleteFactorPack;

@end
