@class NSDate, NSString, ATXMinimalSlotResolutionParameters;

@interface ATXMinimalActionParameters : NSObject <NSCopying>

@property (readonly, nonatomic) ATXMinimalSlotResolutionParameters *minimalSlotResolutionParams;
@property (retain, nonatomic) NSDate *actionTime;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *actionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)getContainerWithScore:(float)a0;
- (id)initWithMinimalSlotResolutionParameters:(id)a0 actionTime:(id)a1 bundleId:(id)a2 actionType:(id)a3;

@end
