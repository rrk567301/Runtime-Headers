@interface HMDConfigurationMessagePolicy : HMFMessagePolicy

@property (readonly) unsigned long long operationTypes;

+ (id)policyWithOperationTypes:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)__initWithOperationTypes:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
