@class NSNumber;

@interface MTROnOffClusterOffWithEffectParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *effectId;
@property (copy, nonatomic) NSNumber *effectVariant;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
