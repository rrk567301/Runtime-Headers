@class POWSchemaProvisionalPOWUsage, NSData, SISchemaRequestLinkInfo;

@interface POWSchemaProvisionalPOWClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaRequestLinkInfo *link;
@property (nonatomic) char hasLink;
@property (retain, nonatomic) POWSchemaProvisionalPOWUsage *usage;
@property (nonatomic) char hasUsage;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

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
- (id)getTypeId;
- (id)qualifiedMessageName;
- (void)deleteLink;
- (void)deleteUsage;

@end
