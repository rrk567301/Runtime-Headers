@class PLATFORMProvisionalConnectedComponentsByClock, NSData, SISchemaUUID;

@interface PLATFORMProvisionalConnectedComponentsWrapper : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaUUID *clockIdentifier;
@property (nonatomic) char hasClockIdentifier;
@property (retain, nonatomic) PLATFORMProvisionalConnectedComponentsByClock *msg;
@property (nonatomic) char hasMsg;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEventtype;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)getVersion;
- (id)initWithJSON:(id)a0;
- (char)isProvisional;
- (int)getAnyEventType;
- (void)deleteClockIdentifier;
- (void)deleteMsg;
- (id)getTypeId;
- (id)qualifiedMessageName;

@end
