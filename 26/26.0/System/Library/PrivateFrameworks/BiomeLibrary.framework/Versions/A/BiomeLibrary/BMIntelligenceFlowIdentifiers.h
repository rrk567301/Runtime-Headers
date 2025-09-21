@class NSUUID, NSString, NSData;

@interface BMIntelligenceFlowIdentifiers : BMEventBase <BMStoreData> {
    NSData *_raw_sessionId;
    NSData *_raw_requestEventId;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) unsigned long long spanId;
@property (nonatomic) BOOL hasSpanId;
@property (readonly, nonatomic) NSString *clientRequestId;
@property (readonly, nonatomic) NSString *clientSessionId;
@property (readonly, nonatomic) NSString *clientApplicationId;
@property (readonly, nonatomic) NSString *clientGroupIdentifier;
@property (readonly, nonatomic) NSUUID *requestEventId;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionId:(id)a0 spanId:(id)a1 clientRequestId:(id)a2 clientSessionId:(id)a3 clientApplicationId:(id)a4 clientGroupIdentifier:(id)a5;
- (id)initWithSessionId:(id)a0 spanId:(id)a1 clientRequestId:(id)a2 clientSessionId:(id)a3 clientApplicationId:(id)a4 clientGroupIdentifier:(id)a5 requestEventId:(id)a6;

@end
