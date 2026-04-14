@class NSDictionary, NSMutableDictionary, NSString;

@interface APSettingsStorageCloud : NSObject <APSettingsStorableProtocol>

@property (readonly, nonatomic) NSDictionary *defaults;
@property (retain, nonatomic) NSMutableDictionary *cloudStore;
@property (readonly, nonatomic) BOOL useLocalPersistance;
@property (readonly, nonatomic) NSString *settingsClassNameForCloud;
@property (readonly, nonatomic) NSString *settingsClassNameForEFS;

- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (id)valueForKey:(id)a0;
- (void)synchronize;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)dealloc;
- (id)initWithDefaultValues:(id)a0;
- (id)initWithDefaultValues:(id)a0 shouldUseLocalPersistance:(BOOL)a1 forSubclass:(Class)a2;
- (void)persistLocallyIfNeeded;
- (void)updateCloudStore:(id)a0;

@end
