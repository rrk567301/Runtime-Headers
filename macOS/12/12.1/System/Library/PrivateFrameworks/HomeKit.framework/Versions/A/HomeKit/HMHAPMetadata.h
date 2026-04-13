@class NSString, NSDictionary, HMFUnfairLock, NSNumber;

@interface HMHAPMetadata : NSObject <HMProtoBufMerge> {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) NSDictionary *hapChrMap;
@property (retain, nonatomic) NSDictionary *hapSvcMap;
@property (retain, nonatomic) NSDictionary *hapCategoryMap;
@property (retain) NSNumber *version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)applyProtoBufData:(id)a0 callbackOperations:(id)a1;
- (id)serviceTypeDescription:(id)a0;
- (id)characteristicTypeDescription:(id)a0;
- (id)categoryForNumber:(id)a0;
- (id)categoryForCategoryType:(id)a0;
- (BOOL)shouldNotCacheCharacteristicOfType:(id)a0;

@end
