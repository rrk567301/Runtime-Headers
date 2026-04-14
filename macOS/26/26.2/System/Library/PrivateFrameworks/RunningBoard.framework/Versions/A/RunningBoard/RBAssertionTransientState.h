@class NSMutableSet, NSMutableDictionary;

@interface RBAssertionTransientState : NSObject <NSCopying> {
    NSMutableDictionary *_cpuUsageViolationPoliciesByRole;
}

@property (readonly, nonatomic) NSMutableSet *tags;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)unionState:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)a0;
- (id)description;
- (void)setMaxCPUUsageViolationPolicy:(unsigned long long)a0 forRole:(unsigned char)a1;
- (void)addTag:(id)a0;

@end
