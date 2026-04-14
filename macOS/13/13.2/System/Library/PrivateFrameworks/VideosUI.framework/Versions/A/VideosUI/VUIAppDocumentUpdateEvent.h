@class VUIAppDocumentUpdateEventDescriptor, NSDictionary;

@interface VUIAppDocumentUpdateEvent : NSObject <NSCopying>

@property (retain, nonatomic) VUIAppDocumentUpdateEventDescriptor *descriptor;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

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
+ (id)upNextLockupArtSettingChanged;
+ (id)removeFromPlayHistory;
+ (id)utsk;
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
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0;
- (id)coalescedEvent:(id)a0;

@end
