@class POWSchemaProvisionalPOWUsage, NSData, SISchemaRequestLinkInfo;

@interface POWSchemaProvisionalPOWClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaRequestLinkInfo *link;
@property (nonatomic) BOOL hasLink;
@property (retain, nonatomic) POWSchemaProvisionalPOWUsage *usage;
@property (nonatomic) BOOL hasUsage;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (id)qualifiedMessageName;
- (void)deleteLink;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)getTypeId;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isProvisional;
- (id)getVersion;
- (void).cxx_destruct;
- (void)deleteUsage;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
