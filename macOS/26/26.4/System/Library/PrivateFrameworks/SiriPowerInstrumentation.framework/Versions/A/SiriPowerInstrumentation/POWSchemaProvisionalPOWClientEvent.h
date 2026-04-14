@class POWSchemaProvisionalPOWUsage, NSData, SISchemaRequestLinkInfo;

@interface POWSchemaProvisionalPOWClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaRequestLinkInfo *link;
@property (nonatomic) BOOL hasLink;
@property (retain, nonatomic) POWSchemaProvisionalPOWUsage *usage;
@property (nonatomic) BOOL hasUsage;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)isProvisional;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (void)deleteUsage;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)getTypeId;
- (id)qualifiedMessageName;
- (id)getVersion;
- (void)writeTo:(id)a0;
- (void)deleteLink;
- (id)initWithJSON:(id)a0;

@end
