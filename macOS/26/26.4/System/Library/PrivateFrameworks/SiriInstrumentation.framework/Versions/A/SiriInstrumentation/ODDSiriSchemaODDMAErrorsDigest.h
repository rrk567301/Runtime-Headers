@class ODDSiriSchemaODDMAErrorsDimensions, NSData;

@interface ODDSiriSchemaODDMAErrorsDigest : SISchemaInstrumentationMessage {
    struct { unsigned char maFailureCount : 1; unsigned char maSuccessCount : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDMAErrorsDimensions *maErrorsDimensions;
@property (nonatomic) BOOL hasMaErrorsDimensions;
@property (nonatomic) unsigned int maFailureCount;
@property (nonatomic) BOOL hasMaFailureCount;
@property (nonatomic) unsigned int maSuccessCount;
@property (nonatomic) BOOL hasMaSuccessCount;
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
- (void)deleteMaErrorsDimensions;
- (void)deleteMaFailureCount;
- (void)deleteMaSuccessCount;

@end
