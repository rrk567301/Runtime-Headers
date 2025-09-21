@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableReadingNowDetail : BCMutableCloudData <BCReadingNowDetail, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *assetID;
@property (nonatomic) char isTrackedAsRecent;
@property (copy, nonatomic) NSDate *lastEngagedDate;
@property (copy, nonatomic) NSString *cloudAssetType;
@property (readonly, nonatomic) char deletedFlag;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) long long editGeneration;
@property (readonly, nonatomic) long long syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (weak, nonatomic) id<BCCloudDataPrivacyDelegate> privacyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)recordType;
- (id)zoneName;
- (id)initWithRecord:(id)a0;
- (id)configuredRecordFromAttributes;
- (id)initWithAssetID:(id)a0;
- (id)initWithCloudData:(id)a0;

@end
