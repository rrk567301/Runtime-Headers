@class NSData, SISchemaUUID;

@interface PGSchemaPGModelInferenceStarted : SISchemaInstrumentationMessage {
    struct { unsigned char modelInterface : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (nonatomic) int modelInterface;
@property (nonatomic) char hasModelInterface;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLinkId;
- (void)deleteModelInterface;
- (id)suppressMessageUnderConditions;

@end
