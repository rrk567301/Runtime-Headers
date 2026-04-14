@class PSGOperationalPredictedItem, PSGProactiveTrigger, PPQuickTypeItem;

@interface PSGStructuredInfoSuggestion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PSGProactiveTrigger *proactiveTrigger;
@property (readonly, nonatomic) PPQuickTypeItem *portraitItem;
@property (readonly, nonatomic) PSGOperationalPredictedItem *operationalItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)predictedValue;
- (BOOL)isEqualToItem:(id)a0;
- (id)initWithProactiveTrigger:(id)a0 portraitItem:(id)a1 operationalItem:(id)a2;
- (BOOL)isApplePay;

@end
