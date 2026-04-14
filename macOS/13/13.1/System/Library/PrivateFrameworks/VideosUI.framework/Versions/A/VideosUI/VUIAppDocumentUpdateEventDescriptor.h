@interface VUIAppDocumentUpdateEventDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL animated;

+ (id)entitlements;
+ (id)settings;
+ (id)restrictions;
+ (id)appDidBecomeActive;
+ (id)accountChanged;
+ (id)purchases;
+ (id)preferredVideoFormat;
+ (id)favorites;
+ (id)playActivity;
+ (id)appRefresh;
+ (id)highlightsChanged;
+ (id)upNext;
+ (id)upNextLockupArtSettingChanged;
+ (id)removeFromPlayHistory;
+ (id)utsk;
+ (id)postPlay;
+ (id)playHistoryUpdated;
+ (id)clearPlayHistory;
+ (id)locationAuthorizationChanged;
+ (id)locationRetrieved;
+ (id)iamMessageReceived;
+ (id)groupRecoCollectionVisiblityChanged;
+ (id)groupRecoUsersChanged;
+ (id)deviceDiscoveryDataAvailable;
+ (id)favoritesSyncCompleted;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEventType:(unsigned long long)a0;

@end
