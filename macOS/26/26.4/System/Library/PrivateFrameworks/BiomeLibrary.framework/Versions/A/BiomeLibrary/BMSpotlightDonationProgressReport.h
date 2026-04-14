@class NSString;

@interface BMSpotlightDonationProgressReport : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long allKnownItems;
@property (nonatomic) BOOL hasAllKnownItems;
@property (readonly, nonatomic) unsigned long long itemsNeedingDonation;
@property (nonatomic) BOOL hasItemsNeedingDonation;
@property (readonly, nonatomic) unsigned long long donatedItems;
@property (nonatomic) BOOL hasDonatedItems;
@property (readonly, nonatomic) unsigned long long partiallyDonatedItems;
@property (nonatomic) BOOL hasPartiallyDonatedItems;
@property (readonly, nonatomic) unsigned long long itemsNeedingDonationForRedonationRequests;
@property (nonatomic) BOOL hasItemsNeedingDonationForRedonationRequests;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithAllKnownItems:(id)a0 itemsNeedingDonation:(id)a1 donatedItems:(id)a2 partiallyDonatedItems:(id)a3 itemsNeedingDonationForRedonationRequests:(id)a4;

@end
