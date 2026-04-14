@interface VUIAppDocumentUpdateEventDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL animated;

+ (id)accountChanged;
+ (id)settings;
+ (id)entitlements;
+ (id)utsk;
+ (id)restrictions;
+ (id)purchases;
+ (id)favorites;
+ (id)preferredVideoFormat;
+ (id)playActivity;
+ (id)appRefresh;
+ (id)highlightsChanged;
+ (id)appDidBecomeActive;
+ (id)brandVisibilityChanged;
+ (id)clearPlayHistory;
+ (id)deviceDiscoveryDataAvailable;
+ (id)favoritesInBackground;
+ (id)favoritesSyncCompleted;
+ (id)federatedAppDidInstall;
+ (id)groupRecoCollectionVisiblityChanged;
+ (id)groupRecoUsersChanged;
+ (id)locationAuthorizationChanged;
+ (id)locationRetrieved;
+ (id)pinnedTabsChanged;
+ (id)playHistoryUpdated;
+ (id)postPlay;
+ (id)preferredPlaybackDimensionalityChanged;
+ (id)removeFromPlayHistory;
+ (id)upNext;
+ (id)upNextLockupArtSettingChanged;

- (id)initWithEventType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
