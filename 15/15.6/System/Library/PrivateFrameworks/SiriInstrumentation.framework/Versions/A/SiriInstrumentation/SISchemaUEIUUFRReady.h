@class NSString, NSArray, NSData, SISchemaUUID;

@interface SISchemaUEIUUFRReady : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char uufrReadySource : 1; unsigned char dialogPhase : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (copy, nonatomic) NSString *aceCommandClass;
@property (nonatomic) char hasAceCommandClass;
@property (copy, nonatomic) NSString *aceViewId;
@property (nonatomic) char hasAceViewId;
@property (nonatomic) int uufrReadySource;
@property (nonatomic) char hasUufrReadySource;
@property (nonatomic) int dialogPhase;
@property (nonatomic) char hasDialogPhase;
@property (copy, nonatomic) NSArray *dialogIdentifiers;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) char hasSubRequestId;
@property (retain, nonatomic) SISchemaUUID *aceCommandId;
@property (nonatomic) char hasAceCommandId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAceViewId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addDialogIdentifiers:(id)a0;
- (void)clearDialogIdentifiers;
- (void)deleteAceCommandClass;
- (void)deleteAceCommandId;
- (void)deleteDialogIdentifiers;
- (void)deleteDialogPhase;
- (void)deleteExists;
- (void)deleteSubRequestId;
- (void)deleteUufrReadySource;
- (id)dialogIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)dialogIdentifiersCount;
- (id)suppressMessageUnderConditions;

@end
