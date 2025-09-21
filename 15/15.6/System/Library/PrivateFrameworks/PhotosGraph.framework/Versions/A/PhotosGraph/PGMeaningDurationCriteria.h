@class NSString, CLSServiceManager;

@interface PGMeaningDurationCriteria : NSObject <PGMeaningCriteria> {
    CLSServiceManager *_serviceManager;
}

@property (nonatomic) unsigned long long minimumDuration;
@property (nonatomic) char includeRoutineVisitsInDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;

- (char)isValid;
- (void).cxx_destruct;
- (char)passesForAssets:(id)a0;
- (char)passesForMomentNode:(id)a0 momentNodeCache:(id)a1;
- (void)setServiceManager:(id)a0;

@end
