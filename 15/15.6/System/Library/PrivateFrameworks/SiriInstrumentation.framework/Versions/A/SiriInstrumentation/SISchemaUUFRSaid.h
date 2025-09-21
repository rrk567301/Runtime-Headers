@class NSString, NSData, SISchemaSiriResponseContext, SISchemaUUID;

@interface SISchemaUUFRSaid : SISchemaInstrumentationMessage {
    struct { unsigned char sonicResponse : 1; unsigned char responseCategory : 1; } _has;
}

@property (copy, nonatomic) NSString *dialogIdentifier;
@property (nonatomic) char hasDialogIdentifier;
@property (retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext;
@property (nonatomic) char hasSiriResponseContext;
@property (copy, nonatomic) NSString *aceViewID;
@property (nonatomic) char hasAceViewID;
@property (copy, nonatomic) NSString *aceViewClass;
@property (nonatomic) char hasAceViewClass;
@property (nonatomic) int sonicResponse;
@property (nonatomic) char hasSonicResponse;
@property (nonatomic) int responseCategory;
@property (nonatomic) char hasResponseCategory;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) char hasSubRequestId;
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
- (void)deleteAceViewID;
- (void)deleteAceViewClass;
- (void)deleteDialogIdentifier;
- (void)deleteResponseCategory;
- (void)deleteSiriResponseContext;
- (void)deleteSonicResponse;
- (void)deleteSubRequestId;
- (id)suppressMessageUnderConditions;

@end
