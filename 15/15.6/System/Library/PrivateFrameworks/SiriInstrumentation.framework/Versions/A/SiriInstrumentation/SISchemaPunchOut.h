@class NSString, NSData, SISchemaViewContainer;

@interface SISchemaPunchOut : SISchemaInstrumentationMessage {
    struct { unsigned char punchOutUI : 1; unsigned char isPunchoutToHomeScreen : 1; } _has;
}

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) char hasAppID;
@property (copy, nonatomic) NSString *urlScheme;
@property (nonatomic) char hasUrlScheme;
@property (retain, nonatomic) SISchemaViewContainer *viewContainer;
@property (nonatomic) char hasViewContainer;
@property (copy, nonatomic) NSData *viewElementID;
@property (nonatomic) char hasViewElementID;
@property (nonatomic) int punchOutUI;
@property (nonatomic) char hasPunchOutUI;
@property (nonatomic) char isPunchoutToHomeScreen;
@property (nonatomic) char hasIsPunchoutToHomeScreen;
@property (copy, nonatomic) NSString *aceID;
@property (nonatomic) char hasAceID;
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
- (void)deleteUrlScheme;
- (void)deleteAceID;
- (void)deleteAppID;
- (void)deleteIsPunchoutToHomeScreen;
- (void)deletePunchOutUI;
- (void)deleteViewContainer;
- (void)deleteViewElementID;
- (id)suppressMessageUnderConditions;

@end
