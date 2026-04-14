@class NSDictionary, RTLocation, NSDate;

@interface RTLocalBluePOIResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *poiConfidences;
@property (readonly, nonatomic) NSDictionary *aoiConfidences;
@property (readonly, nonatomic) RTLocation *referenceLocation;
@property (readonly, nonatomic) NSDate *queryTime;
@property (nonatomic) unsigned long long mostConfidentPOI;
@property (nonatomic) unsigned long long mostConfidentAOI;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPOIConfidences:(id)a0 aoiConfidences:(id)a1 referenceLocation:(id)a2 queryTime:(id)a3;

@end
