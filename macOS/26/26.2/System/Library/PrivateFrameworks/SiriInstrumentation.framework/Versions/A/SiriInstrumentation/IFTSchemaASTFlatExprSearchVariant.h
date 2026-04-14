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

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteExists;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteIsLowConfidenceKnowledge;
- (void)deleteLinkId;

@end
