@class NSArray, ODDSiriSchemaODDMultiUserSetupStatus, NSData;

@interface ODDSiriSchemaODDMultiUserState : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *enrolledUsers;
@property (retain, nonatomic) ODDSiriSchemaODDMultiUserSetupStatus *multiUserSetupStatus;
@property (nonatomic) BOOL hasMultiUserSetupStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addEnrolledUsers:(id)a0;
- (void)clearEnrolledUsers;
- (void)deleteEnrolledUsers;
- (void)deleteMultiUserSetupStatus;
- (id)enrolledUsersAtIndex:(unsigned long long)a0;
- (unsigned long long)enrolledUsersCount;

@end
