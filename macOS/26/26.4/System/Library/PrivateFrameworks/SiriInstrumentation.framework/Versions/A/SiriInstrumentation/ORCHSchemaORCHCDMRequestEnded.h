@class NSData;

@interface ORCHSchemaORCHCDMRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char status : 1; unsigned char delegatedUserDialogAct : 1; } _has;
}

@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL delegatedUserDialogAct;
@property (nonatomic) BOOL hasDelegatedUserDialogAct;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDelegatedUserDialogAct;
- (void)deleteStatus;

@end
