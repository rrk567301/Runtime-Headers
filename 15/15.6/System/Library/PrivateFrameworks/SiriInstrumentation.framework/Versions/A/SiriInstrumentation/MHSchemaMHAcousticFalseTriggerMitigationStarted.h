@class NSString, NSData;

@interface MHSchemaMHAcousticFalseTriggerMitigationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char mitigationType : 1; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) char hasModelVersion;
@property (nonatomic) int mitigationType;
@property (nonatomic) char hasMitigationType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMitigationType;
- (void)deleteModelVersion;
- (id)suppressMessageUnderConditions;

@end
