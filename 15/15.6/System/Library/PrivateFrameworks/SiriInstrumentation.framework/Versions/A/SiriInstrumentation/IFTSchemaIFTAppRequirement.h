@class NSData;

@interface IFTSchemaIFTAppRequirement : SISchemaInstrumentationMessage

@property (nonatomic) char signInRequired;
@property (nonatomic) char hasSignInRequired;
@property (nonatomic) char accountSetupRequired;
@property (nonatomic) char hasAccountSetupRequired;
@property (nonatomic) char userConfirmationRequired;
@property (nonatomic) char hasUserConfirmationRequired;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Apprequirement;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAccountSetupRequired;
- (void)deleteSignInRequired;
- (void)deleteUserConfirmationRequired;
- (id)suppressMessageUnderConditions;

@end
