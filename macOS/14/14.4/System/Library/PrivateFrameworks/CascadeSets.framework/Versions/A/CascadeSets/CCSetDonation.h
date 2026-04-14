@class NSString, NSMutableArray, NSObject;
@protocol CCDonateService;

@interface CCSetDonation : NSObject {
    NSObject<CCDonateService> *_service;
    unsigned short _itemType;
    NSString *_name;
    NSMutableArray *_contentBuffers;
    NSMutableArray *_metaContentBuffers;
    unsigned long long _flushThreshold;
    unsigned long long _bufferSize;
}

@property (readonly, nonatomic) unsigned long long priorVersion;
@property (readonly, nonatomic) long long errorCode;

+ (void)remoteCRDTSetDonationWithItemType:(unsigned short)a0 forAccount:(id)a1 fromDevice:(id)a2 descriptors:(id)a3 serviceProvider:(id)a4 completion:(id /* block */)a5;
+ (void)_setDonationWithItemType:(unsigned short)a0 forAccount:(id)a1 descriptors:(id)a2 fromDevice:(id)a3 version:(unsigned long long)a4 validity:(id)a5 serviceProvider:(id)a6 queue:(id)a7 timeoutNanos:(unsigned long long)a8 completion:(id /* block */)a9;
+ (id)donationWithName:(id)a0 itemType:(unsigned short)a1 service:(id)a2 payload:(unsigned long long)a3;
+ (void)fullSetDonationWithItemType:(unsigned short)a0 forAccount:(id)a1 descriptors:(id)a2 completion:(id /* block */)a3;
+ (void)fullSetDonationWithItemType:(unsigned short)a0 forAccount:(id)a1 descriptors:(id)a2 serviceProvider:(id)a3 completion:(id /* block */)a4;
+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 forAccount:(id)a1 descriptors:(id)a2 version:(unsigned long long)a3 validity:(id)a4 completion:(id /* block */)a5;
+ (void)incrementalSetDonationWithItemType:(unsigned short)a0 forAccount:(id)a1 descriptors:(id)a2 version:(unsigned long long)a3 validity:(id)a4 serviceProvider:(id)a5 completion:(id /* block */)a6;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)finish:(id *)a0;
- (BOOL)addItem:(id)a0 error:(id *)a1;
- (BOOL)_flushItemsWithError:(id *)a0;
- (BOOL)_mergeDelta:(id)a0 withDeltaMetadata:(id)a1;
- (id)initWithName:(id)a0 itemType:(unsigned short)a1 service:(id)a2 payload:(unsigned long long)a3 flushThreshold:(unsigned long long)a4;
- (BOOL)removeSourceItemIdentifier:(id)a0 error:(id *)a1;

@end
