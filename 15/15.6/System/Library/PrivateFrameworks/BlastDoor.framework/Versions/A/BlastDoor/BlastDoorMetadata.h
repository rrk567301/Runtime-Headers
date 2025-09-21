@class NSString, NSUUID, BlastDoorMetadata_StorageContext;

@interface BlastDoorMetadata : NSObject {
    void /* unknown type, empty encoding */ metadata;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSUUID *messageGUID;
@property (nonatomic, readonly) char has_timestamp;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) char wantsDeliveryReceipt;
@property (nonatomic, readonly) char wantsCheckpointing;
@property (nonatomic, readonly) BlastDoorMetadata_StorageContext *storageContext;

- (id)init;
- (void).cxx_destruct;

@end
