@class NSString;

@interface WBCollectionConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) long long collectionType;
@property (readonly, nonatomic) BOOL isReadonly;
@property (readonly, nonatomic) BOOL isInMemoryDatabase;
@property (readonly, nonatomic) BOOL createIfNeeded;
@property (readonly, copy, nonatomic) NSString *databasePath;
@property (nonatomic) unsigned long long maximumTabsPerTabGroup;
@property (nonatomic) BOOL skipsExternalNotifications;
@property (nonatomic) long long storeOwner;

+ (id)safariTabCollectionConfiguration;
+ (id)safariBookmarkCollectionConfiguration;
+ (id)readonlySafariBookmarkCollectionConfiguration;
+ (id)inMemoryBookmarkCollectionConfiguration;
+ (id)readonlySafariTabCollectionConfiguration;
+ (id)inMemoryTabCollectionConfiguration;
+ (id)pptTabCollectionConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCollectionType:(long long)a0 databasePath:(id)a1 readonly:(BOOL)a2;
- (id)initWithCollectionType:(long long)a0 databasePath:(id)a1 readonly:(BOOL)a2 createIfNeeded:(BOOL)a3;

@end
