@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (id)init;
- (void).cxx_destruct;
- (id)countryCode;
- (long long)shortNameFormat;
- (void)setShortNameFormat:(long long)a0;
- (long long)sortOrder;
- (char)isShortNameFormatEnabled;
- (void)setShortNameFormatEnabled:(char)a0;
- (id)initWithFoundationUserDefaults:(id)a0;
- (char)shortNameFormatPrefersNicknames;
- (long long)displayNameOrder;
- (id)filteredGroupAndContainerIDs;
- (long long)newContactDisplayNameOrder;
- (void)setDisplayNameOrder:(long long)a0;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (void)setShortNameFormatPrefersNicknames:(char)a0;

@end
