@class IFTSchemaIFTFollowUpAction, NSData, IFTSchemaIFTTypedValue;

@interface IFTSchemaIFTActionSuccess : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char appLaunched : 1; unsigned char didShowInAppResult : 1; unsigned char shouldOpen : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) IFTSchemaIFTTypedValue *returnValue;
@property (nonatomic) BOOL hasReturnValue;
@property (nonatomic) BOOL appLaunched;
@property (nonatomic) BOOL hasAppLaunched;
@property (nonatomic) BOOL didShowInAppResult;
@property (nonatomic) BOOL hasDidShowInAppResult;
@property (retain, nonatomic) IFTSchemaIFTFollowUpAction *followUpAction;
@property (nonatomic) BOOL hasFollowUpAction;
@property (nonatomic) BOOL shouldOpen;
@property (nonatomic) BOOL hasShouldOpen;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)deleteExists;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAppLaunched;
- (void)deleteDidShowInAppResult;
- (void)deleteFollowUpAction;
- (void)deleteReturnValue;
- (void)deleteShouldOpen;

@end
