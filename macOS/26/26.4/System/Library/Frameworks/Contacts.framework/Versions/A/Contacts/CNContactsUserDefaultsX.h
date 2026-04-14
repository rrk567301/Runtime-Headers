@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (long long)sortOrder;
- (long long)displayNameOrder;
- (id)initWithFoundationUserDefaults:(id)a0;
- (long long)newContactDisplayNameOrder;
- (id)filteredGroupAndContainerIDs;
- (BOOL)isShortNameFormatEnabled;
- (void)setShortNameFormat:(long long)a0;
- (void)setDisplayNameOrder:(long long)a0;
- (void).cxx_destruct;
- (BOOL)showContactPhotos;
- (id)countryCode;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (id)init;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (BOOL)shortNameFormatPrefersNicknames;
- (long long)shortNameFormat;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;
- (void)setShowContactPhotos:(BOOL)a0;

@end
