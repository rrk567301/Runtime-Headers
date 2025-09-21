@class NSString, NSArray, NSData, CKRecordZoneID;

@interface HMBCloudZoneID : HMBCloudID <HMBModelObjectCoder, HMBLocalZoneID>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) CKRecordZoneID *zoneID;
@property (readonly, nonatomic) NSData *token;
@property (readonly, nonatomic) NSString *name;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)hmbDecodeData:(id)a0 fromStorageLocation:(unsigned long long)a1 error:(id *)a2;

- (id)hmbEncodeForStorageLocation:(unsigned long long)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContainerID:(id)a0 scope:(long long)a1 zoneID:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithContainerID:(id)a0 scope:(long long)a1 zoneID:(id)a2 name:(id)a3 modelID:(id)a4;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
