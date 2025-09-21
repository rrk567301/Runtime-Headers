@class NSString;

@interface PGMeaningLocationCriteria : NSObject <PGMeaningCriteria>

@property (nonatomic) char excludeFrequentLocations;
@property (nonatomic) char excludeHomeWorkLocations;
@property (nonatomic) char includeHomeLocations;
@property (nonatomic) char includeWorkLocations;
@property (nonatomic) char includeFrequentLocations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;

@end
