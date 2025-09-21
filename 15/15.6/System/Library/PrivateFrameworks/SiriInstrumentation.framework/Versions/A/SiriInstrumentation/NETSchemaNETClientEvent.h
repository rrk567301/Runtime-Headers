@class NETSchemaNETClientEventMetadata, NETSchemaNETPeerConnectionFailed, SISchemaInstrumentationMessage, NETSchemaNETDebugNetworkConnectionStateReadySnapshotCaptured, NSData, NETSchemaNETNetworkConnectionStatePreparationSnapshotCaptured, NETSchemaNETDebugSessionConnectionSnapshotCaptured, NETSchemaNETSessionConnectionFailed, NETSchemaNETSessionConnectionHttpHeaderCreated, NETSchemaNETDebugNetworkConnectionStatePreparationSnapshotCaptured, NETSchemaNETSessionConnectionSnapshotCaptured, NETSchemaNETNetworkConnectionStateReadySnapshotCaptured;

@interface NETSchemaNETClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) NETSchemaNETClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) NETSchemaNETSessionConnectionHttpHeaderCreated *sessionConnectionHttpHeaderCreated;
@property (nonatomic) char hasSessionConnectionHttpHeaderCreated;
@property (retain, nonatomic) NETSchemaNETSessionConnectionSnapshotCaptured *sessionConnectionSnapshotCaptured;
@property (nonatomic) char hasSessionConnectionSnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionSnapshotCaptured *debugSessionConnectionSnapshotCaptured;
@property (nonatomic) char hasDebugSessionConnectionSnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETSessionConnectionFailed *sessionConnectionFailed;
@property (nonatomic) char hasSessionConnectionFailed;
@property (retain, nonatomic) NETSchemaNETPeerConnectionFailed *peerConnectionFailed;
@property (nonatomic) char hasPeerConnectionFailed;
@property (retain, nonatomic) NETSchemaNETNetworkConnectionStatePreparationSnapshotCaptured *networkConnectionStatePreparationSnapshotCaptured;
@property (nonatomic) char hasNetworkConnectionStatePreparationSnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETDebugNetworkConnectionStatePreparationSnapshotCaptured *debugNetworkConnectionStatePreparationSnapshotCaptured;
@property (nonatomic) char hasDebugNetworkConnectionStatePreparationSnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETNetworkConnectionStateReadySnapshotCaptured *networkConnectionStateReadySnapshotCaptured;
@property (nonatomic) char hasNetworkConnectionStateReadySnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETDebugNetworkConnectionStateReadySnapshotCaptured *debugNetworkConnectionStateReadySnapshotCaptured;
@property (nonatomic) char hasDebugNetworkConnectionStateReadySnapshotCaptured;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteDebugNetworkConnectionStatePreparationSnapshotCaptured;
- (void)deleteDebugNetworkConnectionStateReadySnapshotCaptured;
- (void)deleteDebugSessionConnectionSnapshotCaptured;
- (void)deleteEventMetadata;
- (void)deleteNetworkConnectionStatePreparationSnapshotCaptured;
- (void)deleteNetworkConnectionStateReadySnapshotCaptured;
- (void)deletePeerConnectionFailed;
- (void)deleteSessionConnectionFailed;
- (void)deleteSessionConnectionHttpHeaderCreated;
- (void)deleteSessionConnectionSnapshotCaptured;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
