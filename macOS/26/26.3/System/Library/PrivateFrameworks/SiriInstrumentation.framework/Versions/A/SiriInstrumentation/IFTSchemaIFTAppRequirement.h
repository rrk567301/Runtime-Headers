@class NSData;

@interface IFTSchemaIFTAppRequirement : SISchemaInstrumentationMessage

@property (nonatomic) BOOL signInRequired;
@property (nonatomic) BOOL hasSignInRequired;
@property (nonatomic) BOOL accountSetupRequired;
@property (nonatomic) BOOL hasAccountSetupRequired;
@property (nonatomic) BOOL userConfirmationRequired;
@property (nonatomic) BOOL hasUserConfirmationRequired;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Apprequirement;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAccountSetupRequired;
- (void)deleteSignInRequired;
- (void)deleteUserConfirmationRequired;

@end
