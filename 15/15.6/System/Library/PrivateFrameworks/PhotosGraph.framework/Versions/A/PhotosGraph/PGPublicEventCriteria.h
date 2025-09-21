@class NSString, NSArray;

@interface PGPublicEventCriteria : NSObject

@property (retain, nonatomic) NSString *eventCategory;
@property (nonatomic) double minimumTimeAttendance;
@property (nonatomic) double maximumDistance;
@property (nonatomic) char allowsExpandingTimeAttendance;
@property (nonatomic) long long minimumAttendance;
@property (nonatomic) char promoteToHighConfidenceBasedOnCategory;
@property (retain, nonatomic) NSArray *disambiguationCriteria;
@property (retain, nonatomic) NSArray *highConfidenceCriteria;
@property (retain, nonatomic) NSArray *prohibitedCriteria;
@property (readonly, nonatomic) char hasMinimumAttendance;

- (void).cxx_destruct;
- (char)_hasSufficientTimeOverlapForEvent:(id)a0 matchingOptions:(id)a1;
- (char)_isMatchingMeaningDisambiguationForEvent:(id)a0 matchingOptions:(id)a1 withHighConfidence:(char *)a2;
- (id)_localizedEventNameTerms:(id)a0;
- (id)_localizedSubcategoryTerms:(id)a0;
- (char)_promoteToHighConfidenceBasedOnEvent:(id)a0;
- (char)isMatchingEvent:(id)a0 matchingOptions:(id)a1 withHighConfidence:(char *)a2 matchingDistance:(double *)a3;

@end
