@class NSString, STLocalOrganization;

@interface STLocalOrganizationSettings : STCoreOrganizationSettings

@property (retain, nonatomic) STLocalOrganization *organization;
@property (copy, nonatomic) NSString *recoveryAltDSID;

- (void)didChangeValueForKey:(id)a0;
- (id)dictionaryRepresentation;
- (char)updateWithDictionaryRepresentation:(id)a0;

@end
