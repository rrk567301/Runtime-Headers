@class NSArray;

@interface RTVisitRedactionMetric : NSObject {
    NSArray *_countBins;
    NSArray *_proportionBins;
}

@property (nonatomic) unsigned long long visitsConsideredCount;
@property (nonatomic) unsigned long long redactedForAuthorizedLocation;
@property (nonatomic) unsigned long long redactedForConfidence;
@property (nonatomic) unsigned long long redactedForCategory;
@property (nonatomic) unsigned long long redactedForPlaceType;
@property (nonatomic) unsigned long long redactedForRegion;
@property (nonatomic) double redactionProportion;

- (id)init;
- (void).cxx_destruct;
- (id)metricDictionary;

@end
