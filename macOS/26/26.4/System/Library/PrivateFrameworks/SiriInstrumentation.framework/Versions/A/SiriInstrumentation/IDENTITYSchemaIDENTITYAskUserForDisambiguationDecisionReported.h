@class NSData;

@interface IDENTITYSchemaIDENTITYAskUserForDisambiguationDecisionReported : SISchemaInstrumentationMessage {
    struct { unsigned char isUserDisambiguationSkipped : 1; } _has;
}

@property (nonatomic) BOOL isUserDisambiguationSkipped;
@property (nonatomic) BOOL hasIsUserDisambiguationSkipped;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsUserDisambiguationSkipped;

@end
