@class NSData;

@interface IDENTITYSchemaIDENTITYAskUserForDisambiguationDecisionReported : SISchemaInstrumentationMessage {
    struct { unsigned char isUserDisambiguationSkipped : 1; } _has;
}

@property (nonatomic) char isUserDisambiguationSkipped;
@property (nonatomic) char hasIsUserDisambiguationSkipped;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsUserDisambiguationSkipped;
- (id)suppressMessageUnderConditions;

@end
