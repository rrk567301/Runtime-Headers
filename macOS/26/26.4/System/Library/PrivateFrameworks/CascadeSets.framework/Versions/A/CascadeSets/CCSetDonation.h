@class NSMutableArray, NSString, NSDictionary, NSMutableDictionary, NSDate, NSObject, CCDonationServicePriors;
@protocol CCDonationService;

@interface CCSetDonation : NSObject {
    NSObject<CCDonationService> *_service;
    unsigned short _itemType;
    NSString *_name;
    NSMutableArray *_contentBuffers;
    NSMutableArray *_metaContentBuffers;
    NSMutableArray *_cacheContentBuffers;
    unsigned long long _flushThreshold;
    unsigned long long _bufferSize;
    unsigned short _finishOptions;
    NSDictionary *_priorRevisionTokenDictionary;
    NSMutableDictionary *_updatedRevisionTokenDictionary;
}

@property (readonly, nonatomic) CCDonationServicePriors *priors;
@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) unsigned long long priorVersion;
@property (readonly, nonatomic) unsigned long long priorInstanceCount;
@property (readonly, nonatomic) NSDate *priorDonationDate;
@property (readonly, nonatomic) NSDate *priorFullSetDonationDate;

+ (BOOL)isCacheEnabledSourceIdentifier:(id)a0;
+ (id)itemCacheContentWithText:(id)a0 html:(id)a1 error:(id *)a2;
+ (id)startIncrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 options:(unsigned short)a2 error:(id *)a3;
+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 version:(unsigned long long)a2 validity:(id)a3 completion:(id /* block */)a4;
+ (void)deleteSetWithItemType:(unsigned short)a0 descriptors:(id)a1 completion:(id /* block */)a2;
+ (void)fullSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 completion:(id /* block */)a2;
+ (id)startFullSetDonationWithItemType:(unsigned short)a0 error:(id *)a1;
+ (id)startFullSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 error:(id *)a2;
+ (id)_remoteCRDTSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 serviceProvider:(id)a2 error:(id *)a3;
+ (id)_defaultXPCClientFactory;
+ (BOOL)_deleteSetWithItemType:(unsigned short)a0 descriptors:(id)a1 serviceProvider:(id)a2 error:(id *)a3;
+ (id)_fullSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 options:(unsigned short)a2 serviceProvider:(id)a3 error:(id *)a4;
+ (id)_incrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 options:(unsigned short)a2 serviceProvider:(id)a3 error:(id *)a4;
+ (id)_incrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 version:(unsigned long long)a2 validity:(id)a3 serviceProvider:(id)a4 error:(id *)a5;
+ (id)_setDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 version:(id)a2 validity:(id)a3 serviceOptions:(unsigned short)a4 serviceProvider:(id)a5 error:(id *)a6;
+ (void)deleteSetWithItemType:(unsigned short)a0 completion:(id /* block */)a1;
+ (BOOL)deleteSetWithItemType:(unsigned short)a0 descriptors:(id)a1 error:(id *)a2;
+ (BOOL)deleteSetWithItemType:(unsigned short)a0 error:(id *)a1;
+ (id)donationWithName:(id)a0 itemType:(unsigned short)a1 service:(id)a2 serviceOptions:(unsigned short)a3 errorCode:(long long)a4 priors:(id)a5;
+ (void)fullSetDonationWithItemType:(unsigned short)a0 completion:(id /* block */)a1;
+ (id)fullSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 error:(id *)a2;
+ (id)fullSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 options:(unsigned short)a2 error:(id *)a3;
+ (void)fullSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 serviceProvider:(id)a2 completion:(id /* block */)a3;
+ (id)fullSetDonationWithItemType:(unsigned short)a0 error:(id *)a1;
+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 completion:(id /* block */)a1;
+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 completion:(id /* block */)a2;
+ (id)incrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 error:(id *)a2;
+ (id)incrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 options:(unsigned short)a2 error:(id *)a3;
+ (id)incrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 version:(unsigned long long)a2 validity:(id)a3 error:(id *)a4;
+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 version:(unsigned long long)a2 validity:(id)a3 serviceProvider:(id)a4 completion:(id /* block */)a5;
+ (id)incrementalSetDonationWithItemType:(unsigned short)a0 error:(id *)a1;
+ (id)startFullSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 options:(unsigned short)a2 error:(id *)a3;
+ (id)startIncrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 error:(id *)a2;
+ (id)startIncrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 version:(unsigned long long)a2 validity:(id)a3 error:(id *)a4;
+ (id)startIncrementalSetDonationWithItemType:(unsigned short)a0 error:(id *)a1;

- (void)cancel;
- (void).cxx_destruct;
- (BOOL)_flushItemsWithError:(id *)a0;
- (id)init;
- (id)description;
- (BOOL)finish:(id *)a0;
- (void)dealloc;
- (id)priorRevisionTokenWithKey:(id)a0;
- (BOOL)updateRevisionToken:(id)a0 withKey:(id)a1 error:(id *)a2;
- (unsigned long long)priorVersion;
- (void)_addFinishOptions:(unsigned short)a0;
- (BOOL)_addItem:(id)a0 cacheContent:(id)a1 error:(id *)a2;
- (BOOL)_finishWithServiceOptions:(unsigned short)a0 error:(id *)a1;
- (id)_priorRevisionTokenOrEmptyDictionary;
- (BOOL)_remoteUpdateFromDeviceUUID:(id)a0 withType:(unsigned char)a1 mergeableDelta:(id)a2 peerDeviceSite:(id)a3 relayedDeviceSites:(id)a4 error:(id *)a5;
- (BOOL)_removeItemsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)_removeSourceItemIdentifier:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 itemType:(unsigned short)a1 service:(id)a2 serviceOptions:(unsigned short)a3 errorCode:(long long)a4 priors:(id)a5 flushThreshold:(unsigned long long)a6;
- (id)priorDonationDate;
- (id)priorFullSetDonationDate;
- (unsigned long long)priorInstanceCount;

@end
