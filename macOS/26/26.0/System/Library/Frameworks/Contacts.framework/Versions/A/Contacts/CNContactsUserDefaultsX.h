@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (long long)shortNameFormat;
- (id)filteredGroupAndContainerIDs;
- (id)initWithFoundationUserDefaults:(id)a0;
- (BOOL)isShortNameFormatEnabled;
- (id)init;
- (long long)displayNameOrder;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (void)setDisplayNameOrder:(long long)a0;
- (BOOL)shortNameFormatPrefersNicknames;
- (void)setShortNameFormat:(long long)a0;
- (id)countryCode;
- (long long)newContactDisplayNameOrder;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;
- (void).cxx_destruct;
- (long long)sortOrder;

@end
