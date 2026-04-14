@class BMMailSearchUIEventResultReceived, NSString, BMMailSearchUIEventDimensionContext, BMMailSearchUIEventDisplayContext, BMMailSearchUIEventSessionIdResetContext, BMMailSearchUIEventUserInteractionDetected, BMMailSearchUIEventInputDetected, BMMailSearchUIEventSearchViewContext;

@interface BMMailSearchUIEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) unsigned long long queryId;
@property (nonatomic) BOOL hasQueryId;
@property (readonly, nonatomic) BMMailSearchUIEventDimensionContext *dimensionContext;
@property (readonly, nonatomic) BMMailSearchUIEventSearchViewContext *searchViewContext;
@property (readonly, nonatomic) BMMailSearchUIEventInputDetected *inputDetected;
@property (readonly, nonatomic) BMMailSearchUIEventResultReceived *resultReceived;
@property (readonly, nonatomic) BMMailSearchUIEventDisplayContext *displayContext;
@property (readonly, nonatomic) BMMailSearchUIEventUserInteractionDetected *userInteractionDetected;
@property (readonly, nonatomic) BMMailSearchUIEventSessionIdResetContext *sessionIdResetContext;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)initWithSessionId:(id)a0 queryId:(id)a1 dimensionContext:(id)a2 searchViewContext:(id)a3 inputDetected:(id)a4 resultReceived:(id)a5 displayContext:(id)a6 userInteractionDetected:(id)a7 sessionIdResetContext:(id)a8;

@end
