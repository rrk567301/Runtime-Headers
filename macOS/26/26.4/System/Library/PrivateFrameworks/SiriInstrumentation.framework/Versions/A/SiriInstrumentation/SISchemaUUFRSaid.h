@class NSString, NSData, SISchemaSiriResponseContext, SISchemaUUID;

@interface SISchemaUUFRSaid : SISchemaInstrumentationMessage {
    struct { unsigned char sonicResponse : 1; unsigned char responseCategory : 1; } _has;
}

@property (copy, nonatomic) NSString *dialogIdentifier;
@property (nonatomic) BOOL hasDialogIdentifier;
@property (retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext;
@property (nonatomic) BOOL hasSiriResponseContext;
@property (copy, nonatomic) NSString *aceViewID;
@property (nonatomic) BOOL hasAceViewID;
@property (copy, nonatomic) NSString *aceViewClass;
@property (nonatomic) BOOL hasAceViewClass;
@property (nonatomic) int sonicResponse;
@property (nonatomic) BOOL hasSonicResponse;
@property (nonatomic) int responseCategory;
@property (nonatomic) BOOL hasResponseCategory;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) BOOL hasSubRequestId;
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
- (void)deleteAceViewID;
- (void)deleteAceViewClass;
- (void)deleteDialogIdentifier;
- (void)deleteResponseCategory;
- (void)deleteSiriResponseContext;
- (void)deleteSonicResponse;
- (void)deleteSubRequestId;

@end
