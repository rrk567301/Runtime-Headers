@class CKAsset, NSString;

@interface CKSyncEnginePendingAssetSync : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CKAsset *asset;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;
- (id)initWithAsset:(id)a0 type:(long long)a1;

@end
