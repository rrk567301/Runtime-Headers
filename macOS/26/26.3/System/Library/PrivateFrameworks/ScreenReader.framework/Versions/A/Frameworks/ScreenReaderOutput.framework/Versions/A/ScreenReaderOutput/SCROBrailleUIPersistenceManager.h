@interface SCROBrailleUIPersistenceManager : NSObject

+ (id)sharedInstance;

- (void)_accessCache:(id)a0 withKey:(id)a1 setValue:(id)a2 getValue:(id *)a3 maxRecordCount:(long long)a4;
- (id)_brailleUIDataDirectory;
- (id)_cloudDataDirectory;
- (id)_filePathForCache:(id)a0;
- (id)_loadDataFromFile:(id)a0;
- (id)_localDataDirectory;
- (id)getValueForKey:(id)a0 cache:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1 cache:(id)a2 maxRecordCount:(long long)a3;

@end
