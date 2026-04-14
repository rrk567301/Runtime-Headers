@class BMLocationPlaceInferenceStats, NSString, NSDate, BMInferredLocation, BMLearnedPlace;

@interface BMLocationPlaceInference : BMEventBase <BMStoreData> {
    BOOL _hasRaw_detectionDate;
    double _raw_detectionDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *detectionDate;
@property (readonly, nonatomic) BMInferredLocation *location;
@property (readonly, nonatomic) BMLearnedPlace *learnedPlace;
@property (readonly, nonatomic) BMLocationPlaceInferenceStats *stats;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithDetectionDate:(id)a0 location:(id)a1 learnedPlace:(id)a2 stats:(id)a3;

@end
