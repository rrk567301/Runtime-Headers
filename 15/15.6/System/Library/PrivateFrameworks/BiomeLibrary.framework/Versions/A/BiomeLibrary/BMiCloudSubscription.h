@class NSString;

@interface BMiCloudSubscription : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double mlServerScore;
@property (nonatomic) char hasMlServerScore;
@property (readonly, nonatomic) long long totalQuota;
@property (nonatomic) char hasTotalQuota;
@property (readonly, nonatomic) long long totalUsed;
@property (nonatomic) char hasTotalUsed;
@property (readonly, nonatomic) long long totalAvailable;
@property (nonatomic) char hasTotalAvailable;
@property (readonly, nonatomic) long long bundleQuotaInBytes;
@property (nonatomic) char hasBundleQuotaInBytes;
@property (readonly, nonatomic) long long commerceQuotaInBytes;
@property (nonatomic) char hasCommerceQuotaInBytes;
@property (readonly, nonatomic) int iCloudSubscriptionEventType;
@property (readonly, nonatomic) int displayEntry;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithMlServerScore:(id)a0 totalQuota:(id)a1 totalUsed:(id)a2 totalAvailable:(id)a3 bundleQuotaInBytes:(id)a4 commerceQuotaInBytes:(id)a5 iCloudSubscriptionEventType:(int)a6;
- (id)initWithMlServerScore:(id)a0 totalQuota:(id)a1 totalUsed:(id)a2 totalAvailable:(id)a3 bundleQuotaInBytes:(id)a4 commerceQuotaInBytes:(id)a5 iCloudSubscriptionEventType:(int)a6 displayEntry:(int)a7;

@end
