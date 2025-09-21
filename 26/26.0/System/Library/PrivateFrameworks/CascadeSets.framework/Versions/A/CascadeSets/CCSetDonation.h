@class NSString, CCDonateServicePriors, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CCDonateService;

@interface CCSetDonation : NSObject {
    NSObject<CCDonateService> *_service;
    unsigned short _itemType;
    NSString *_name;
    NSMutableArray *_contentBuffers;
    NSMutableArray *_metaContentBuffers;
    unsigned long long _flushThreshold;
    unsigned long long _bufferSize;
    unsigned short _finishOptions;
    NSString *_revisionToken;
}

@property (readonly, nonatomic) CCDonateServicePriors *priors;
@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned long long priorVersion;
@property (readonly, nonatomic) unsigned long long priorInstanceCount;
@property (readonly, nonatomic) NSDate *priorDonationDate;
@property (readonly, nonatomic) NSDate *priorFullSetDonationDate;
@property (readonly, nonatomic) NSString *priorRevisionToken;

+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 version:(unsigned long long)a2 validity:(id)a3 completion:(id /* block */)a4;
+ (void)deleteSetWithItemType:(unsigned short)a0 descriptors:(id)a1 completion:(id /* block */)a2;
+ (void)fullSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 completion:(id /* block */)a2;
+ (void)remoteCRDTSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 serviceProvider:(id)a2 completion:(id /* block */)a3;
+ (void)_setDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 version:(unsigned long long)a2 validity:(id)a3 options:(unsigned short)a4 serviceProvider:(id)a5 queue:(id)a6 timeoutNanos:(unsigned long long)a7 completion:(id /* block */)a8;
+ (void)deleteSetWithItemType:(unsigned short)a0 descriptors:(id)a1 serviceProvider:(id)a2 completion:(id /* block */)a3;
+ (id)donationWithName:(id)a0 itemType:(unsigned short)a1 service:(id)a2 errorCode:(long long)a3 priors:(id)a4;
+ (void)fullSetDonationWithItemType:(unsigned short)a0 completion:(id /* block */)a1;
+ (void)fullSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 serviceProvider:(id)a2 completion:(id /* block */)a3;
+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 completion:(id /* block */)a1;
+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 completion:(id /* block */)a2;
+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 serviceProvider:(id)a2 completion:(id /* block */)a3;
+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 descriptors:(id)a1 version:(unsigned long long)a2 validity:(id)a3 serviceProvider:(id)a4 completion:(id /* block */)a5;

- (void)dealloc;
- (void)cancel;
- (id)init;
- (id)description;
- (BOOL)_flushItemsWithError:(id *)a0;
- (BOOL)finish:(id *)a0;
- (void).cxx_destruct;
- (BOOL)_addItem:(id)a0 error:(id *)a1;
- (unsigned long long)priorVersion;
- (void)_addFinishOptions:(unsigned short)a0;
- (BOOL)_finishWithOptions:(unsigned short)a0 error:(id *)a1;
- (BOOL)_remoteUpdateFromDeviceUUID:(id)a0 withType:(unsigned char)a1 mergeableDelta:(id)a2 peerDeviceSite:(id)a3 relayedDeviceSites:(id)a4;
- (BOOL)_removeSourceItemIdentifier:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 itemType:(unsigned short)a1 service:(id)a2 errorCode:(long long)a3 priors:(id)a4 flushThreshold:(unsigned long long)a5;
- (id)priorDonationDate;
- (id)priorFullSetDonationDate;
- (unsigned long long)priorInstanceCount;
- (id)priorRevisionToken;
- (BOOL)updateRevisionToken:(id)a0 error:(id *)a1;

@end
