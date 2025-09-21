@class MOInternalBatchSettingsStore;

@interface MOBatchSettingsStore : MOSettingsStore

@property (readonly, nonatomic) MOInternalBatchSettingsStore *internalStore;
@property (nonatomic) BOOL active;

+ (id)storeWithName:(id)a0 sharedContainer:(id)a1;

- (void)commitChanges;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 sharedContainer:(id)a1;
- (void)clearAllSettings;
- (void)deleteStore;

@end
