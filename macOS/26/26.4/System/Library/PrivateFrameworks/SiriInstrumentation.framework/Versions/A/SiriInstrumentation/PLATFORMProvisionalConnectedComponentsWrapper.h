@class PLATFORMProvisionalConnectedComponentsByClock, NSData, SISchemaUUID;

@interface PLATFORMProvisionalConnectedComponentsWrapper : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaUUID *clockIdentifier;
@property (nonatomic) BOOL hasClockIdentifier;
@property (retain, nonatomic) PLATFORMProvisionalConnectedComponentsByClock *msg;
@property (nonatomic) BOOL hasMsg;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEventtype;

- (BOOL)isProvisional;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)getTypeId;
- (id)qualifiedMessageName;
- (id)getVersion;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteClockIdentifier;
- (void)deleteMsg;

@end
