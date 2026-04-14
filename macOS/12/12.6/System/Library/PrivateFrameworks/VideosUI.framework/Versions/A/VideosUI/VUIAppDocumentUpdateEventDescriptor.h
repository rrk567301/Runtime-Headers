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
+ (id)upNext;
+ (id)upNextLockupArtSettingChanged;
+ (id)removeFromPlayHistory;
+ (id)utsk;
+ (id)postPlay;
+ (id)playHistoryUpdated;
+ (id)clearPlayHistory;
+ (id)appRefresh;
+ (id)locationAuthorizationChanged;
+ (id)locationRetrieved;
+ (id)iamMessageReceived;
+ (id)highlightsChanged;
+ (id)groupRecoCollectionVisiblityChanged;
+ (id)groupRecoUsersChanged;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithEventType:(unsigned long long)a0;

@end
