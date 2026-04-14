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
+ (id)defaultFavoritesLocation;
+ (id)favoritesPath;
+ (void)flushSingleton;

- (id)initWithContactStore:(id)a0;
- (void)save;
- (void)_addEntryToMap:(id)a0;
- (BOOL)_isValueForEntry:(id)a0 equalToValue:(id)a1;
- (void)loadAllFavoritesIfNecessary;
- (void)dealloc;
- (void)moveEntryAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)removeEntryAtIndex:(long long)a0;
- (id)initWithContactStore:(id)a0 favoritesStore:(id)a1;
- (void)registerForDistributedNotifications;
- (void)removeAllEntries;
- (id)init;
- (void)addEntry:(id)a0;
- (void)_postChangeNotification;
- (void)unregisterForDistributedNotifications;
- (id)entriesForContact:(id)a0;
- (id)entriesForContact:(id)a0 propertyKey:(id)a1 labeledValueIdentifier:(id)a2 actionType:(id)a3 bundleIdentifier:(id)a4;
- (id)initWithContactStore:(id)a0 favoritesStore:(id)a1 logger:(id)a2;
- (id)_uniqueRematchedEntries:(id)a0;
- (void)rematchEntriesWithOptions:(unsigned long long)a0;
- (BOOL)saveAllFavorites;
- (void)_entriesChangedExternally;
- (void)_removeEntryFromMap:(id)a0;
- (void)saveImmediately;
- (id)defaultFavoritesStoreWithContactStore:(id)a0;
- (void).cxx_destruct;

@end
