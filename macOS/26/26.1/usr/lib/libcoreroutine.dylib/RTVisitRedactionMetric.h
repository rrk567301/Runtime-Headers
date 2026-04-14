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

- (void).cxx_destruct;
- (id)init;
- (id)metricDictionary;

@end
