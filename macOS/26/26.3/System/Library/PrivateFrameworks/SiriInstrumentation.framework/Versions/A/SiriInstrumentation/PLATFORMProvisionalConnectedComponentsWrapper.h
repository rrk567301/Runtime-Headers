@class PLATFORMProvisionalConnectedComponentsByClock, NSData, SISchemaUUID;

@interface PLATFORMProvisionalConnectedComponentsWrapper : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaUUID *clockIdentifier;
@property (nonatomic) BOOL hasClockIdentifier;
@property (retain, nonatomic) PLATFORMProvisionalConnectedComponentsByClock *msg;
@property (nonatomic) BOOL hasMsg;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEventtype;

- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)getTypeId;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isProvisional;
- (id)getVersion;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteClockIdentifier;
- (void)deleteMsg;

@end
