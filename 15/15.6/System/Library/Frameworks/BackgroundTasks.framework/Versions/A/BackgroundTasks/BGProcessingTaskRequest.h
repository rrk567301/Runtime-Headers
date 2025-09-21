@interface BGProcessingTaskRequest : BGTaskRequest

@property char requiresNetworkConnectivity;
@property char requiresExternalPower;

+ (Class)_correspondingTaskClass;
+ (id)_requestFromActivity:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)_activity;

@end
