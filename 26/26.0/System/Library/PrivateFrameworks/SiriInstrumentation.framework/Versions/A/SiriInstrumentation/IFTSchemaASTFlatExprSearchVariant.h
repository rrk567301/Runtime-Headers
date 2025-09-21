@class NSData, SISchemaUUID;

@interface IFTSchemaASTFlatExprSearchVariant : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char isLowConfidenceKnowledge : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) BOOL isLowConfidenceKnowledge;
@property (nonatomic) BOOL hasIsLowConfidenceKnowledge;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)deleteExists;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteIsLowConfidenceKnowledge;
- (void)deleteLinkId;

@end
