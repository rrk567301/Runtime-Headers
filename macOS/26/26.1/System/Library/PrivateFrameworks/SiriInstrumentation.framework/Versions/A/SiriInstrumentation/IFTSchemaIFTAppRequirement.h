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
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteAccountSetupRequired;
- (void)deleteSignInRequired;
- (void)deleteUserConfirmationRequired;

@end
