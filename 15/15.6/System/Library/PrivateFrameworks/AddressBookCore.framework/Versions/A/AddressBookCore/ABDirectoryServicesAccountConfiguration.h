@class ABUserDefaults, NSString, ABDirectoryServicesConnectivityTest, NSObject;
@protocol OS_os_log;

@interface ABDirectoryServicesAccountConfiguration : ABAbstractAccountConfiguration {
    ABUserDefaults *_preferences;
    NSString *_accountIdentifier;
    char _didCheckDirectoryServicesConnectivity;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (retain) ABDirectoryServicesConnectivityTest *directoryServicesConnectivityTest;
@property (nonatomic, getter=isSearchable) char searchable;
@property (nonatomic, getter=isEnabled) char enabled;

- (void)dealloc;
- (char)save:(id *)a0;
- (id)primitiveValueForKey:(id)a0;
- (void)setPrimitiveValue:(id)a0 forKey:(id)a1;
- (id)initWithAccountIdentifier:(id)a0;
- (id)initWithAccount:(id)a0 persistence:(id)a1;
- (id)initWithAccountIdentifier:(id)a0 preferences:(id)a1 directoryServicesConnectivityTest:(id)a2;
- (void)postNotifications;
- (char)primitiveIsEnabled;
- (char)primitiveIsSearchable;
- (char)shouldCheckDirectoryServicesConnectivity;
- (void)updateSearchability:(char)a0;
- (void)updateSearchabilityIfNeeded;

@end
