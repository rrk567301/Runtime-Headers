@class NSArray, NSData;

@interface SISchemaMultiUserState : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *enrolledUsers;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addEnrolledUsers:(id)a0;
- (void)clearEnrolledUsers;
- (void)deleteEnrolledUsers;
- (id)enrolledUsersAtIndex:(unsigned long long)a0;
- (unsigned long long)enrolledUsersCount;

@end
