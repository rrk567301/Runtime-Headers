@class NSString, NSDate;

@interface BMMomentsNotificationsPrediction : BMEventBase <BMStoreData> {
    BOOL _hasRaw_predictionDate;
    double _raw_predictionDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double vailabilityProbability;
@property (nonatomic) BOOL hasVailabilityProbability;
@property (readonly, nonatomic) double locationFilterProbability;
@property (nonatomic) BOOL hasLocationFilterProbability;
@property (readonly, nonatomic) NSDate *predictionDate;
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
- (id)initWithVailabilityProbability:(id)a0 locationFilterProbability:(id)a1 predictionDate:(id)a2;

@end
