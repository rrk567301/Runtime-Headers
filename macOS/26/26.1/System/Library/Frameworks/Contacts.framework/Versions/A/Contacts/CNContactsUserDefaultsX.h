@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (long long)sortOrder;
- (id)countryCode;
- (id)initWithFoundationUserDefaults:(id)a0;
- (void)setShortNameFormat:(long long)a0;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (BOOL)isShortNameFormatEnabled;
- (long long)displayNameOrder;
- (BOOL)shortNameFormatPrefersNicknames;
- (long long)shortNameFormat;
- (void)setDisplayNameOrder:(long long)a0;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;
- (void).cxx_destruct;
- (long long)newContactDisplayNameOrder;
- (id)filteredGroupAndContainerIDs;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (id)init;

@end
