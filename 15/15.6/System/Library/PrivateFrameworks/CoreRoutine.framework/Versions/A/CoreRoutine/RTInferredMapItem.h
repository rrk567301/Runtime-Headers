@class RTMapItem;

@interface RTInferredMapItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) RTMapItem *mapItem;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) unsigned long long source;

+ (id)heaviestMapItemFrom:(id)a0 closestToLocation:(id)a1 distanceCalculator:(id)a2 error:(id *)a3;
+ (double)consolidatedConfidenceFromConfidences:(id)a0;
+ (unsigned long long)consolidatedSourceFromInferredMapItems:(id)a0;
+ (id)dedupeInferredMapItems:(id)a0;
+ (char)hasKnownTypeItem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMapItem:(id)a0 confidence:(double)a1 source:(unsigned long long)a2;

@end
