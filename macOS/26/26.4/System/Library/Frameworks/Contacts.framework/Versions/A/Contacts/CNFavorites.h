@class CNContactStore, NSMutableDictionary, NSArray;
@protocol CNFavoritesStore, CNFavoritesLogger;

@interface CNFavorites : NSObject {
    NSArray *_entries;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (nonatomic) BOOL dirty;
@property (nonatomic) unsigned long long postCount;
@property (nonatomic) BOOL needsReload;
@property (readonly, nonatomic) id<CNFavoritesLogger> logger;
@property (retain, nonatomic) id<CNFavoritesStore> favoritesStore;
@property (retain, nonatomic) NSMutableDictionary *entriesByContactIdentifier;
@property (readonly, copy, nonatomic) NSArray *entries;
@property (readonly, nonatomic, getter=isFull) BOOL full;

+ (id)sharedInstance;
+ (id)favoritesPath;
+ (void)flushSingleton;
+ (id)defaultFavoritesLocation;

- (void)addEntry:(id)a0;
- (void)save;
- (id)defaultFavoritesStoreWithContactStore:(id)a0;
- (id)entriesForContact:(id)a0 propertyKey:(id)a1 labeledValueIdentifier:(id)a2 actionType:(id)a3 bundleIdentifier:(id)a4;
- (void)removeAllEntries;
- (void)_addEntryToMap:(id)a0;
- (BOOL)_isValueForEntry:(id)a0 equalToValue:(id)a1;
- (id)entriesForContact:(id)a0;
- (void)registerForDistributedNotifications;
- (id)initWithContactStore:(id)a0 favoritesStore:(id)a1 logger:(id)a2;
- (void)moveEntryAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)saveImmediately;
- (void)loadAllFavoritesIfNecessary;
- (void).cxx_destruct;
- (void)_removeEntryFromMap:(id)a0;
- (void)removeEntryAtIndex:(long long)a0;
- (void)_postChangeNotification;
- (void)rematchEntriesWithOptions:(unsigned long long)a0;
- (id)initWithContactStore:(id)a0;
- (id)init;
- (void)_entriesChangedExternally;
- (id)_uniqueRematchedEntries:(id)a0;
- (void)dealloc;
- (BOOL)saveAllFavorites;
- (id)initWithContactStore:(id)a0 favoritesStore:(id)a1;
- (void)unregisterForDistributedNotifications;

@end
