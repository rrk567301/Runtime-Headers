@class NSString;

@interface PGMeaningPeopleCriteria : NSObject <PGMeaningCriteria>

@property (nonatomic) unsigned long long minimumNumberOfPeople;
@property (nonatomic) char requiresPetPresence;
@property (nonatomic) char requiresChildPresence;
@property (nonatomic) char requiresPartnerPresence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;

@end
