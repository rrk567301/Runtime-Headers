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

- (id)suppressMessageUnderConditions;
- (void)deleteExists;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsLowConfidenceKnowledge;
- (void)deleteLinkId;

@end
