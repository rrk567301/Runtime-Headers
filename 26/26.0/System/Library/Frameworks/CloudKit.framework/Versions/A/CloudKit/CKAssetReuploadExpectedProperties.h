@class NSData;

@interface CKAssetReuploadExpectedProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *fileSignature;
@property (readonly, copy, nonatomic) NSData *referenceSignature;
@property (readonly, copy, nonatomic) NSData *assetKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFileSignature:(id)a0 referenceSignature:(id)a1 assetKey:(id)a2;

@end
