@class NSString, NSDictionary;

@interface PCDistanceWeightingConfig : NSObject <NSCopying>

@property (nonatomic) long long configType;
@property (retain, nonatomic) NSString *configName;
@property (retain, nonatomic) NSDictionary *weights;
@property (nonatomic) unsigned long long minPoints;
@property (nonatomic) unsigned long long minClusterSize;
@property (nonatomic) double minimumRatioThreshold;
@property (nonatomic) unsigned long long minimumCountThreshold;
@property (nonatomic) unsigned long long clusterPhenotypeMinimumCountThreshold;

+ (id)clusteringConfiguration;
+ (id)predictionConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
