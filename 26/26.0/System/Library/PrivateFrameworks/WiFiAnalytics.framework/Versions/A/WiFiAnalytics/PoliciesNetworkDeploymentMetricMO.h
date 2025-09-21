@class BSSMO;

@interface PoliciesNetworkDeploymentMetricMO : PoliciesMO

@property (retain, nonatomic) BSSMO *bss;

+ (id)fetchRequest;

@end
