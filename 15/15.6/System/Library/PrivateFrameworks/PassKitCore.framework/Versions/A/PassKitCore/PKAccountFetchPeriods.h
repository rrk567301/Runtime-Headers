@class NSSet;

@interface PKAccountFetchPeriods : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double accountFetchPeriod;
@property (nonatomic) double extendedAccountFetchPeriod;
@property (nonatomic) double usersFetchPeriod;
@property (nonatomic) double sharedCloudStoreModelFetchPeriod;
@property (nonatomic) double financingPlansFetchPeriod;
@property (nonatomic) double fundingSourcesFetchPeriod;
@property (nonatomic) double promotionsFetchPeriod;
@property (nonatomic) double recoveryPaymentPlansFetchPeriod;
@property (nonatomic) double physicalCardsFetchPeriod;
@property (copy, nonatomic) NSSet *blockedEndpoints;

+ (char)isLastUpdatedOutOfDate:(id)a0 fetchPeriod:(double)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)endpointIsBlocked:(unsigned long long)a0;
- (double)fetchPeriodForEndpoint:(unsigned long long)a0;
- (char)isEqualToAccountFetchPeriods:(id)a0;

@end
