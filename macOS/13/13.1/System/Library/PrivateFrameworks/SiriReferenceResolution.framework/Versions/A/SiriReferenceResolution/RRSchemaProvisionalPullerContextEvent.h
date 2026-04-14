@class RRSchemaProvisionalPullerContext, NSData;

@interface RRSchemaProvisionalPullerContextEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) RRSchemaProvisionalPullerContext *pullerContext;
@property (nonatomic) BOOL hasPullerContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)getVersion;
- (id)initWithJSON:(id)a0;
- (BOOL)isProvisional;
- (int)getAnyEventType;
- (id)getTypeId;
- (id)qualifiedMessageName;

@end
