@class NSData;

@interface SUGSchemaSUGSuppressionResult : SISchemaInstrumentationMessage {
    struct { unsigned char wasSuppressed : 1; unsigned char suppressionReason : 1; } _has;
}

@property (nonatomic) char wasSuppressed;
@property (nonatomic) char hasWasSuppressed;
@property (nonatomic) int suppressionReason;
@property (nonatomic) char hasSuppressionReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSuppressionReason;
- (void)deleteWasSuppressed;
- (id)suppressMessageUnderConditions;

@end
