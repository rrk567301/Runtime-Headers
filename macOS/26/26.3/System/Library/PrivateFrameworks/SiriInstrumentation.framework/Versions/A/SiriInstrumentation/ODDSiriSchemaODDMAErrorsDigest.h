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

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteMaErrorsDimensions;
- (void)deleteMaFailureCount;
- (void)deleteMaSuccessCount;

@end
