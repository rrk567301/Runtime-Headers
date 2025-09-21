@class NSData, FLSchemaFLCandidateIdentifier;

@interface FLSchemaFLCandidateInteraction : SISchemaInstrumentationMessage {
    struct { unsigned char alignment : 1; } _has;
}

@property (retain, nonatomic) FLSchemaFLCandidateIdentifier *identifier;
@property (nonatomic) char hasIdentifier;
@property (nonatomic) int alignment;
@property (nonatomic) char hasAlignment;
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
- (void)deleteAlignment;
- (void)deleteIdentifier;
- (id)suppressMessageUnderConditions;

@end
