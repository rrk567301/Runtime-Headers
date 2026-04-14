@class NSString, STLocalOrganization;

@interface STLocalOrganizationSettings : STCoreOrganizationSettings

@property (retain, nonatomic) STLocalOrganization *organization;
@property (copy, nonatomic) NSString *recoveryAltDSID;

- (id)dictionaryRepresentation;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;
- (void)didChangeValueForKey:(id)a0;

@end
