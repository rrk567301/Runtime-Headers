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
+ (id)clearPlayHistory;
+ (id)deviceDiscoveryDataAvailable;
+ (id)favoritesSyncCompleted;
+ (id)groupRecoCollectionVisiblityChanged;
+ (id)groupRecoUsersChanged;
+ (id)iamMessageReceived;
+ (id)locationAuthorizationChanged;
+ (id)locationRetrieved;
+ (id)playHistoryUpdated;
+ (id)postPlay;
+ (id)removeFromPlayHistory;
+ (id)upNext;
+ (id)upNextLockupArtSettingChanged;
+ (id)utsk;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithEventType:(unsigned long long)a0;

@end
