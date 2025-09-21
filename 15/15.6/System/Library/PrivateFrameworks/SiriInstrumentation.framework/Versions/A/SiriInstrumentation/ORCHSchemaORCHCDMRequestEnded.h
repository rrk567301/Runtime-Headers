@class NSData;

@interface ORCHSchemaORCHCDMRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char status : 1; unsigned char delegatedUserDialogAct : 1; } _has;
}

@property (nonatomic) int status;
@property (nonatomic) char hasStatus;
@property (nonatomic) char delegatedUserDialogAct;
@property (nonatomic) char hasDelegatedUserDialogAct;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDelegatedUserDialogAct;
- (void)deleteStatus;
- (id)suppressMessageUnderConditions;

@end
