@class POWSchemaProvisionalPOWUsage, NSData, SISchemaRequestLinkInfo;

@interface POWSchemaProvisionalPOWClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaRequestLinkInfo *link;
@property (nonatomic) BOOL hasLink;
@property (retain, nonatomic) POWSchemaProvisionalPOWUsage *usage;
@property (nonatomic) BOOL hasUsage;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (id)initWithDictionary:(id)a0;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (BOOL)isProvisional;
- (void)deleteLink;
- (id)qualifiedMessageName;
- (BOOL)readFrom:(id)a0;
- (id)getTypeId;
- (id)initWithJSON:(id)a0;
- (id)getVersion;
- (void)writeTo:(id)a0;
- (void)deleteUsage;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
