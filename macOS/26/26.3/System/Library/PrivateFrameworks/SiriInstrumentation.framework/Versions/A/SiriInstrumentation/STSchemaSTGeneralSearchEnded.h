@class NSArray, NSData, SISchemaUUID;

@interface STSchemaSTGeneralSearchEnded : SISchemaInstrumentationMessage {
    struct { unsigned char responseDialogSource : 1; unsigned char dialogFallbackReason : 1; } _has;
}

@property (copy, nonatomic) NSArray *results;
@property (nonatomic) int responseDialogSource;
@property (nonatomic) BOOL hasResponseDialogSource;
@property (nonatomic) int dialogFallbackReason;
@property (nonatomic) BOOL hasDialogFallbackReason;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (unsigned long long)resultCount;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)resultAtIndex:(unsigned long long)a0;
- (void)addResult:(id)a0;
- (void)clearResult;
- (void)deleteDialogFallbackReason;
- (void)deleteLinkId;
- (void)deleteResponseDialogSource;
- (void)deleteResult;

@end
