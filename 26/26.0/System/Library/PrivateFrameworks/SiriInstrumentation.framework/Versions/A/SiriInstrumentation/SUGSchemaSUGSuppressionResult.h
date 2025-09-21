@class NSData;

@interface SUGSchemaSUGSuppressionResult : SISchemaInstrumentationMessage {
    struct { unsigned char wasSuppressed : 1; unsigned char suppressionReason : 1; } _has;
}

@property (nonatomic) BOOL wasSuppressed;
@property (nonatomic) BOOL hasWasSuppressed;
@property (nonatomic) int suppressionReason;
@property (nonatomic) BOOL hasSuppressionReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteSuppressionReason;
- (void)deleteWasSuppressed;

@end
