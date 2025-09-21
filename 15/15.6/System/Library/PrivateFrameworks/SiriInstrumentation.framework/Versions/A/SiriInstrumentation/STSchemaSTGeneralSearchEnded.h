@class NSArray, NSData, SISchemaUUID;

@interface STSchemaSTGeneralSearchEnded : SISchemaInstrumentationMessage {
    struct { unsigned char responseDialogSource : 1; unsigned char dialogFallbackReason : 1; } _has;
}

@property (copy, nonatomic) NSArray *results;
@property (nonatomic) int responseDialogSource;
@property (nonatomic) char hasResponseDialogSource;
@property (nonatomic) int dialogFallbackReason;
@property (nonatomic) char hasDialogFallbackReason;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)resultAtIndex:(unsigned long long)a0;
- (unsigned long long)resultCount;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addResult:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearResult;
- (void)deleteDialogFallbackReason;
- (void)deleteLinkId;
- (void)deleteResponseDialogSource;
- (void)deleteResult;
- (id)suppressMessageUnderConditions;

@end
