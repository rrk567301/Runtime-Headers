@class NTTodayBanner, NSString, NSOrderedSet, NSDate, NSObject;

@interface NTTodayResults : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSOrderedSet *sections;
@property (readonly, nonatomic) int promotionCriterion;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) double headlineScale;
@property (readonly, nonatomic) NSObject *assetsHoldToken;
@property (readonly, nonatomic) NSObject *recordsHoldToken;
@property (readonly, nonatomic) NTTodayBanner *banner;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)itemCount;
- (id)initWithSourceIdentifier:(id)a0 sections:(id)a1 expirationDate:(id)a2 headlineScale:(double)a3;
- (id)initWithSourceIdentifier:(id)a0 sections:(id)a1 promotionCriterion:(int)a2 expirationDate:(id)a3 headlineScale:(double)a4 assetsHoldToken:(id)a5 recordsHoldToken:(id)a6 banner:(id)a7;

@end
