@class NSString, NSDate;

@interface BMSiriInferredHelpfulness : BMEventBase <BMStoreData> {
    char _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) double inferredHelpfulnessScore;
@property (nonatomic) char hasInferredHelpfulnessScore;
@property (readonly, nonatomic) double restatementScore;
@property (nonatomic) char hasRestatementScore;
@property (readonly, nonatomic) NSString *turnID;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithAbsoluteTimestamp:(id)a0 inferredHelpfulnessScore:(id)a1 restatementScore:(id)a2 turnID:(id)a3 modelID:(id)a4;

@end
