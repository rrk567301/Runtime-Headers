@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (long long)shortNameFormat;
- (long long)displayNameOrder;
- (BOOL)isShortNameFormatEnabled;
- (long long)sortOrder;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (void)setDisplayNameOrder:(long long)a0;
- (id)initWithFoundationUserDefaults:(id)a0;
- (long long)newContactDisplayNameOrder;
- (void).cxx_destruct;
- (id)countryCode;
- (id)filteredGroupAndContainerIDs;
- (BOOL)shortNameFormatPrefersNicknames;
- (id)init;
- (void)setShortNameFormat:(long long)a0;
- (void)setFilteredGroupAndContainerIDs:(id)a0;

@end
