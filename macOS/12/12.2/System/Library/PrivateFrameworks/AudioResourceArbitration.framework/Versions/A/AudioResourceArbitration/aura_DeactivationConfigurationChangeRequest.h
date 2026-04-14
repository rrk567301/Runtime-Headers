@interface AuRA_DeactivationConfigurationChangeRequest : AuRA_ConfigurationChangeRequest

+ (id)createDeactivationConfigurationChangeRequestWithSessionToken:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSessionToken:(unsigned long long)a0;

@end
