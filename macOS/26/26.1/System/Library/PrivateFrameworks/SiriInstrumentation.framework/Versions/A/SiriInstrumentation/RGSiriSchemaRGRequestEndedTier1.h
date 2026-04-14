@class NSString, NSData, SISchemaUUID;

@interface RGSiriSchemaRGRequestEndedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *displayString;
@property (nonatomic) BOOL hasDisplayString;
@property (copy, nonatomic) NSString *spokenString;
@property (nonatomic) BOOL hasSpokenString;
@property (copy, nonatomic) NSString *catId;
@property (nonatomic) BOOL hasCatId;
@property (copy, nonatomic) NSString *staticDialogId;
@property (nonatomic) BOOL hasStaticDialogId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteCatId;
- (void)deleteDisplayString;
- (void)deleteLinkId;
- (void)deleteSpokenString;
- (void)deleteStaticDialogId;

@end
