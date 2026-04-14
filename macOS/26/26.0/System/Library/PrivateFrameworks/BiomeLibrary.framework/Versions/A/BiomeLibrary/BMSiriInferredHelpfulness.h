@class NSString, NSDate;

@interface BMSiriInferredHelpfulness : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) double inferredHelpfulnessScore;
@property (nonatomic) BOOL hasInferredHelpfulnessScore;
@property (readonly, nonatomic) double restatementScore;
@property (nonatomic) BOOL hasRestatementScore;
@property (readonly, nonatomic) NSString *turnID;
@property (readonly, nonatomic) NSString *modelID;
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
- (id)initWithAbsoluteTimestamp:(id)a0 inferredHelpfulnessScore:(id)a1 restatementScore:(id)a2 turnID:(id)a3 modelID:(id)a4;

@end
