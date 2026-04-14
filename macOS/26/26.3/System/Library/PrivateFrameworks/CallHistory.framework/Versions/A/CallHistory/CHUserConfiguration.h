@protocol CHMutableKeyValueDataSource, CHKeyValueDataSource;

@interface CHUserConfiguration : CHConfiguration

@property (readonly, nonatomic) id<CHKeyValueDataSource, CHMutableKeyValueDataSource> dataSource;

+ (id)userDefaults;
+ (id)registeredDefaults;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)dealloc;
- (void)synchronize;
- (BOOL)propertyNameForKeyPath:(id)a0;
- (void)setKeepCallsTimeIntervalType:(long long)a0;

@end
