@class NSArray, ODDSiriSchemaODDMultiUserSetupStatus, NSData;

@interface ODDSiriSchemaODDMultiUserState : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *enrolledUsers;
@property (retain, nonatomic) ODDSiriSchemaODDMultiUserSetupStatus *multiUserSetupStatus;
@property (nonatomic) BOOL hasMultiUserSetupStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEnrolledUsers:(id)a0;
- (void)clearEnrolledUsers;
- (void)deleteEnrolledUsers;
- (void)deleteMultiUserSetupStatus;
- (id)enrolledUsersAtIndex:(unsigned long long)a0;
- (unsigned long long)enrolledUsersCount;

@end
