@class NSString, NSArray, NSDate;

@interface BMMicroLocationLocalization : BMEventBase <BMStoreData> {
    char _hasRaw_absoluteTimeStamp;
    double _raw_absoluteTimeStamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *absoluteTimeStamp;
@property (readonly, nonatomic) NSString *clientBundleID;
@property (readonly, nonatomic) NSString *maxProbabilityLabel;
@property (readonly, nonatomic) double maxProbability;
@property (nonatomic) char hasMaxProbability;
@property (readonly, nonatomic) NSArray *probabilityVector;
@property (readonly, nonatomic) NSArray *numDevicesVector;
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
- (id)_numDevicesVectorJSONArray;
- (id)_probabilityVectorJSONArray;
- (id)initWithAbsoluteTimeStamp:(id)a0 clientBundleID:(id)a1 maxProbabilityLabel:(id)a2 maxProbability:(id)a3 probabilityVector:(id)a4 numDevicesVector:(id)a5;

@end
