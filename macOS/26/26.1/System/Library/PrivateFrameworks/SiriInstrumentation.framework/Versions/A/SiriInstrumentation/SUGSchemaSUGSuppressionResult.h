@class NSData;

@interface SUGSchemaSUGSuppressionResult : SISchemaInstrumentationMessage {
    struct { unsigned char wasSuppressed : 1; unsigned char suppressionReason : 1; } _has;
}

@property (nonatomic) BOOL wasSuppressed;
@property (nonatomic) BOOL hasWasSuppressed;
@property (nonatomic) int suppressionReason;
@property (nonatomic) BOOL hasSuppressionReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteSuppressionReason;
- (void)deleteWasSuppressed;

@end
