@class VUIAppDocumentUpdateEventDescriptor, NSDictionary;

@interface VUIAppDocumentUpdateEvent : NSObject <NSCopying>

@property (retain, nonatomic) VUIAppDocumentUpdateEventDescriptor *descriptor;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)entitlements;
+ (id)accountChanged;
+ (id)settings;
+ (id)restrictions;
+ (id)appDidBecomeActive;
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
+ (id)locationAuthorizationChanged;
+ (id)locationRetrieved;
+ (id)playHistoryUpdated;
+ (id)removeFromPlayHistory;
+ (id)upNextLockupArtSettingChanged;
+ (id)utsk;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0;
- (id)coalescedEvent:(id)a0;

@end
