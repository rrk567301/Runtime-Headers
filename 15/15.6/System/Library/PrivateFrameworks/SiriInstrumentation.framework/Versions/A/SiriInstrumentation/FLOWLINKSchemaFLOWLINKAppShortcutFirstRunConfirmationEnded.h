@class NSData;

@interface FLOWLINKSchemaFLOWLINKAppShortcutFirstRunConfirmationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isUserResponseAffirmative : 1; } _has;
}

@property (nonatomic) char isUserResponseAffirmative;
@property (nonatomic) char hasIsUserResponseAffirmative;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsUserResponseAffirmative;
- (id)suppressMessageUnderConditions;

@end
