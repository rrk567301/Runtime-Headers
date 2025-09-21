@interface HMDSiriAccessoryInfo : NSObject

@property (weak, nonatomic) id targetsAccessory;
@property (nonatomic) char supportsDragonSiri;

+ (id)infoWithTargetableAccessory:(id)a0;

- (void).cxx_destruct;
- (char)isActiveAndSupportsDragonSiri;

@end
