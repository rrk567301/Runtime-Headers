@class READSchemaREADRequestContext, READSchemaREADClientEventMetadata, SISchemaInstrumentationMessage, NSData, READSchemaREADRequestPreprocessingContext, READSchemaREADPlaybackSessionContext;

@interface READSchemaREADClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) READSchemaREADClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) READSchemaREADRequestContext *readThisRequestContext;
@property (nonatomic) char hasReadThisRequestContext;
@property (retain, nonatomic) READSchemaREADRequestPreprocessingContext *readsThisRequestPreprocessingContext;
@property (nonatomic) char hasReadsThisRequestPreprocessingContext;
@property (retain, nonatomic) READSchemaREADPlaybackSessionContext *playbackSessionContext;
@property (nonatomic) char hasPlaybackSessionContext;
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
- (void)deleteEventMetadata;
- (void)deletePlaybackSessionContext;
- (void)deleteReadThisRequestContext;
- (void)deleteReadsThisRequestPreprocessingContext;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
