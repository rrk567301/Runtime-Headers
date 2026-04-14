@class NTTodayBanner, NSString, NSOrderedSet, NTWidgetDebugInspection, NSDate, NSObject;

@interface NTTodayResults : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSOrderedSet *sections;
@property (readonly, nonatomic) int promotionCriterion;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) double headlineScale;
@property (readonly, nonatomic) NSObject *assetsHoldToken;
@property (readonly, nonatomic) NSObject *recordsHoldToken;
@property (readonly, nonatomic) NTTodayBanner *banner;
@property (readonly, nonatomic) NTWidgetDebugInspection *debugInspection;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSourceIdentifier:(id)a0 sections:(id)a1 expirationDate:(id)a2 headlineScale:(double)a3;
- (id)description;
- (id)init;
- (unsigned long long)itemCount;
- (id)initWithSourceIdentifier:(id)a0 sections:(id)a1 promotionCriterion:(int)a2 expirationDate:(id)a3 headlineScale:(double)a4 assetsHoldToken:(id)a5 recordsHoldToken:(id)a6 banner:(id)a7 debugInspection:(id)a8;

@end
