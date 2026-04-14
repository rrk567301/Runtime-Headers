@class NSData;

@interface ORCHSchemaORCHCDMRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char status : 1; unsigned char delegatedUserDialogAct : 1; } _has;
}

@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL delegatedUserDialogAct;
@property (nonatomic) BOOL hasDelegatedUserDialogAct;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteDelegatedUserDialogAct;
- (void)deleteStatus;

@end
