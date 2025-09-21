@class NSString, WBSDevice;

@interface WBCollectionConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) long long collectionType;
@property (readonly, nonatomic) BOOL isReadonly;
@property (readonly, nonatomic) BOOL isInMemoryDatabase;
@property (readonly, nonatomic) BOOL createIfNeeded;
@property (readonly, copy, nonatomic) NSString *databasePath;
@property (nonatomic) unsigned long long maximumTabsPerTabGroup;
@property (nonatomic) BOOL skipsExternalNotifications;
@property (nonatomic) long long storeOwner;
@property (retain, nonatomic) WBSDevice *device;
@property (copy, nonatomic) NSString *identifier;

+ (id)debugTabCollectionConfiguration;
+ (id)inMemoryTabCollectionConfiguration;
+ (id)sharedInMemoryTabCollectionConfiguration;
+ (id)sharedInMemoryTabCollectionConfigurationWithIdentifier:(id)a0;
+ (id)readonlySafariTabCollectionConfiguration;
+ (id)pptTabCollectionConfiguration;
+ (id)inMemoryBookmarkCollectionConfiguration;
+ (id)safariTabCollectionConfiguration;
+ (id)readonlySafariBookmarkCollectionConfiguration;
+ (id)safariBookmarkCollectionConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCollectionType:(long long)a0 databasePath:(id)a1 readonly:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithCollectionType:(long long)a0 databasePath:(id)a1 readonly:(BOOL)a2 createIfNeeded:(BOOL)a3;

@end
