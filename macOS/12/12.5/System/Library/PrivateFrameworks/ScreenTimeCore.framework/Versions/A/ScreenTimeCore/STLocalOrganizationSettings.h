@class NSString, STLocalOrganization;

@interface STLocalOrganizationSettings : STCoreOrganizationSettings

@property (retain, nonatomic) STLocalOrganization *organization;
@property (copy, nonatomic) NSString *recoveryAltDSID;

- (id)dictionaryRepresentation;
- (void)setPasscode:(id)a0;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;

@end
