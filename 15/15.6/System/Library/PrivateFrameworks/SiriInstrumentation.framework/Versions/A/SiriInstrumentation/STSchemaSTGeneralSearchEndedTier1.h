@class NSString, NSData, SISchemaUUID;

@interface STSchemaSTGeneralSearchEndedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (copy, nonatomic) NSString *catId;
@property (nonatomic) char hasCatId;
@property (copy, nonatomic) NSString *staticDialogId;
@property (nonatomic) char hasStaticDialogId;
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
- (void)deleteCatId;
- (void)deleteLinkId;
- (void)deleteStaticDialogId;
- (id)suppressMessageUnderConditions;

@end
