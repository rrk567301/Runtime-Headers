@class NSNumber, NSString, NSData;

@interface CKAssetDownloadStagingInfo : NSObject <CKPropertiesDescription, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *itemID;
@property (readonly, copy, nonatomic) NSString *trackingUUID;
@property (readonly, copy, nonatomic) NSData *signature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemID:(id)a0 trackingUUID:(id)a1 signature:(id)a2;

@end
