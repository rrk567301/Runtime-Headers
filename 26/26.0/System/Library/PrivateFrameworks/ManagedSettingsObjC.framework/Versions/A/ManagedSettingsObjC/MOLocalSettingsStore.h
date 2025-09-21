@class NSSet, MOInternalLocalSettingsStore;

@interface MOLocalSettingsStore : MOSettingsStore

@property (class, readonly, nonatomic) NSSet *stores;

@property (readonly, nonatomic) MOInternalLocalSettingsStore *internalStore;
@property (nonatomic) BOOL active;

+ (id)new;
+ (void)deleteStoresWithStoreNames:(id)a0;
+ (void)deleteStoresWithStoreNames:(id)a0 sharedContainer:(id)a1;
+ (id)storesForSharedContainer:(id)a0;

- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 sharedContainer:(id)a1;
- (void)batchUpdate:(id /* block */)a0;
- (void)clearAllSettings;
- (void)deleteStore;
- (id)initWithSharedContainer:(id)a0;

@end
