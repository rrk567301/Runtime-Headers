@class NSUUID, NSString, NSData;

@interface BMIntelligenceEngineInteractionTranscriptStatementID : BMEventBase <BMStoreData> {
    NSData *_raw_sessionId;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) unsigned int statementIndex;
@property (nonatomic) BOOL hasStatementIndex;
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
- (id)initWithSessionId:(id)a0 statementIndex:(id)a1;

@end
