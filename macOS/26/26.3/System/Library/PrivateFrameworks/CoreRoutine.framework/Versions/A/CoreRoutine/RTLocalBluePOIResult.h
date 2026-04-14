@class NSDictionary, RTLocation, NSDate, NSNumber;

@interface RTLocalBluePOIResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *poiConfidences;
@property (readonly, nonatomic) NSDictionary *aoiConfidences;
@property (readonly, nonatomic) NSNumber *distanceToNearestAOILowerBound;
@property (readonly, nonatomic) RTLocation *referenceLocation;
@property (readonly, nonatomic) NSDate *queryTime;
@property (nonatomic) unsigned long long mostConfidentPOI;
@property (nonatomic) unsigned long long mostConfidentAOI;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPOIConfidences:(id)a0 aoiConfidences:(id)a1 distanceToNearestAOILowerBound:(id)a2 referenceLocation:(id)a3 queryTime:(id)a4;
- (id)initWithPOIConfidences:(id)a0 aoiConfidences:(id)a1 referenceLocation:(id)a2 queryTime:(id)a3;

@end
