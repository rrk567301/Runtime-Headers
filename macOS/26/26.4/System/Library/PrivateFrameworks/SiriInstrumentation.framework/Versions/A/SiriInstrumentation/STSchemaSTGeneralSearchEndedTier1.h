@class NSString, NSData, SISchemaUUID;

@interface STSchemaSTGeneralSearchEndedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *catId;
@property (nonatomic) BOOL hasCatId;
@property (copy, nonatomic) NSString *staticDialogId;
@property (nonatomic) BOOL hasStaticDialogId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCatId;
- (void)deleteLinkId;
- (void)deleteStaticDialogId;

@end
