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
+ (id)removeFromPlayHistory;
+ (id)utsk;
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
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0;
- (id)coalescedEvent:(id)a0;

@end
