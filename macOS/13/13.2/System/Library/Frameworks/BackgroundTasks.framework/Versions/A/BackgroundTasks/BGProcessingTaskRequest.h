@interface BGProcessingTaskRequest : BGTaskRequest

@property BOOL requiresNetworkConnectivity;
@property BOOL requiresExternalPower;

+ (id)_requestFromActivity:(id)a0;
+ (Class)_correspondingTaskClass;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (id)_activity;

@end
