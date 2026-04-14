@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (long long)sortOrder;
- (void)setDisplayNameOrder:(long long)a0;
- (long long)displayNameOrder;
- (long long)newContactDisplayNameOrder;
- (BOOL)shortNameFormatPrefersNicknames;
- (id)init;
- (BOOL)isShortNameFormatEnabled;
- (id)initWithFoundationUserDefaults:(id)a0;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (id)countryCode;
- (void)setShortNameFormat:(long long)a0;
- (void).cxx_destruct;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;
- (id)filteredGroupAndContainerIDs;
- (long long)shortNameFormat;

@end
