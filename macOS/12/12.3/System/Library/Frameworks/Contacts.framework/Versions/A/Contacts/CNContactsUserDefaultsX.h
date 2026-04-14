@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (id)init;
- (void).cxx_destruct;
- (id)countryCode;
- (long long)shortNameFormat;
- (void)setShortNameFormat:(long long)a0;
- (long long)sortOrder;
- (BOOL)isShortNameFormatEnabled;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (long long)displayNameOrder;
- (void)setDisplayNameOrder:(long long)a0;
- (long long)newContactDisplayNameOrder;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;
- (BOOL)shortNameFormatPrefersNicknames;
- (id)initWithFoundationUserDefaults:(id)a0;
- (id)filteredGroupAndContainerIDs;
- (void)setFilteredGroupAndContainerIDs:(id)a0;

@end
