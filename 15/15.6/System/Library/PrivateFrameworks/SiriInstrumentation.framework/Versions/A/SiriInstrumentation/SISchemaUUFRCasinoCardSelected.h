@class NSString, NSData;

@interface SISchemaUUFRCasinoCardSelected : SISchemaInstrumentationMessage {
    struct { unsigned char ordinalCardSectionPosition : 1; } _has;
}

@property (copy, nonatomic) NSString *cardSectionId;
@property (nonatomic) char hasCardSectionId;
@property (nonatomic) int ordinalCardSectionPosition;
@property (nonatomic) char hasOrdinalCardSectionPosition;
@property (copy, nonatomic) NSString *snippetAceId;
@property (nonatomic) char hasSnippetAceId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCardSectionId;
- (void)deleteOrdinalCardSectionPosition;
- (void)deleteSnippetAceId;
- (id)suppressMessageUnderConditions;

@end
