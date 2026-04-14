@class VUIAppDocumentUpdateEventDescriptor, NSDictionary;

@interface VUIAppDocumentUpdateEvent : NSObject <NSCopying>

@property (retain, nonatomic) VUIAppDocumentUpdateEventDescriptor *descriptor;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) BOOL isRefreshEvent;

+ (id)settings;
+ (id)entitlements;
+ (id)accountChanged;
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
+ (id)favoritesSyncCompleted;
+ (id)federatedAppDidInstall;
+ (id)groupRecoCollectionVisiblityChanged;
+ (id)groupRecoUsersChanged;
+ (id)locationAuthorizationChanged;
+ (id)locationRetrieved;
+ (id)pinnedTabsChanged;
+ (id)playHistoryUpdated;
+ (id)removeFromPlayHistory;
+ (id)upNextLockupArtSettingChanged;

- (id)initWithDescriptor:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)coalescedEvent:(id)a0;

@end
