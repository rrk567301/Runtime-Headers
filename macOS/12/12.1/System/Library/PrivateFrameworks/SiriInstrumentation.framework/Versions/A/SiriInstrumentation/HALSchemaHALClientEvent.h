@class HALSchemaHALForceFetchContext, HALSchemaHALCrossDeviceCommandExecutionContext, HALSchemaHALClientEventMetadata, HALSchemaHALLocalFetchContext, HALSchemaHALContextCollectorFetchContext, NSData;

@interface HALSchemaHALClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) HALSchemaHALClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) HALSchemaHALCrossDeviceCommandExecutionContext *crossDeviceCommandContext;
@property (nonatomic) BOOL hasCrossDeviceCommandContext;
@property (retain, nonatomic) HALSchemaHALLocalFetchContext *localFetchContext;
@property (nonatomic) BOOL hasLocalFetchContext;
@property (retain, nonatomic) HALSchemaHALContextCollectorFetchContext *contextCollectorFetchContext;
@property (nonatomic) BOOL hasContextCollectorFetchContext;
@property (retain, nonatomic) HALSchemaHALForceFetchContext *forceFetchContext;
@property (nonatomic) BOOL hasForceFetchContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;

@end
