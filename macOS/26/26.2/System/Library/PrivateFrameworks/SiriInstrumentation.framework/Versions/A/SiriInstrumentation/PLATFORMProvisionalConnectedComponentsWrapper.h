@class PLATFORMProvisionalConnectedComponentsByClock, NSData, SISchemaUUID;

@interface PLATFORMProvisionalConnectedComponentsWrapper : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaUUID *clockIdentifier;
@property (nonatomic) BOOL hasClockIdentifier;
@property (retain, nonatomic) PLATFORMProvisionalConnectedComponentsByClock *msg;
@property (nonatomic) BOOL hasMsg;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEventtype;

- (id)getVersion;
- (id)initWithJSON:(id)a0;
- (BOOL)isProvisional;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)qualifiedMessageName;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (id)getTypeId;
- (id)dictionaryRepresentation;
- (void)deleteClockIdentifier;
- (void)deleteMsg;

@end
