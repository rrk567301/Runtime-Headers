@interface AuRA_DeactivationConfigurationChangeRequest : AuRA_ConfigurationChangeRequest

+ (id)createDeactivationConfigurationChangeRequestWithSessionToken:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSessionToken:(unsigned long long)a0;

@end
