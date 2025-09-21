@class PSGOperationalPredictedItem, PSGProactiveTrigger, PPQuickTypeItem;

@interface PSGStructuredInfoSuggestion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PSGProactiveTrigger *proactiveTrigger;
@property (readonly, nonatomic) PPQuickTypeItem *portraitItem;
@property (readonly, nonatomic) PSGOperationalPredictedItem *operationalItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)predictedValue;
- (char)isEqualToItem:(id)a0;
- (id)initWithProactiveTrigger:(id)a0 portraitItem:(id)a1 operationalItem:(id)a2;
- (char)isApplePay;

@end
