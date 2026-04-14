@class NSData;

@interface FLOWLINKSchemaFLOWLINKAppShortcutFirstRunConfirmationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isUserResponseAffirmative : 1; } _has;
}

@property (nonatomic) BOOL isUserResponseAffirmative;
@property (nonatomic) BOOL hasIsUserResponseAffirmative;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteIsUserResponseAffirmative;

@end
