@class READSchemaREADRequestContext, READSchemaREADClientEventMetadata, SISchemaInstrumentationMessage, NSData, READSchemaREADRequestPreprocessingContext, READSchemaREADPlaybackSessionContext;

@interface READSchemaREADClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) READSchemaREADClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) READSchemaREADRequestContext *readThisRequestContext;
@property (nonatomic) BOOL hasReadThisRequestContext;
@property (retain, nonatomic) READSchemaREADRequestPreprocessingContext *readsThisRequestPreprocessingContext;
@property (nonatomic) BOOL hasReadsThisRequestPreprocessingContext;
@property (retain, nonatomic) READSchemaREADPlaybackSessionContext *playbackSessionContext;
@property (nonatomic) BOOL hasPlaybackSessionContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (int)componentName;
- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteEventMetadata;
- (void)deletePlaybackSessionContext;
- (void)deleteReadThisRequestContext;
- (void)deleteReadsThisRequestPreprocessingContext;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
