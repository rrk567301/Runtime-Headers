@class IFTSchemaIFTFollowUpAction, NSData, IFTSchemaIFTTypedValue;

@interface IFTSchemaIFTActionSuccess : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char appLaunched : 1; unsigned char didShowInAppResult : 1; unsigned char shouldOpen : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (retain, nonatomic) IFTSchemaIFTTypedValue *returnValue;
@property (nonatomic) char hasReturnValue;
@property (nonatomic) char appLaunched;
@property (nonatomic) char hasAppLaunched;
@property (nonatomic) char didShowInAppResult;
@property (nonatomic) char hasDidShowInAppResult;
@property (retain, nonatomic) IFTSchemaIFTFollowUpAction *followUpAction;
@property (nonatomic) char hasFollowUpAction;
@property (nonatomic) char shouldOpen;
@property (nonatomic) char hasShouldOpen;
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
- (void)deleteAppLaunched;
- (void)deleteDidShowInAppResult;
- (void)deleteExists;
- (void)deleteFollowUpAction;
- (void)deleteReturnValue;
- (void)deleteShouldOpen;
- (id)suppressMessageUnderConditions;

@end
