@class NSData;

@interface CKAssetReuploadExpectedProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *fileSignature;
@property (readonly, copy, nonatomic) NSData *referenceSignature;
@property (readonly, copy, nonatomic) NSData *assetKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithFileSignature:(id)a0 referenceSignature:(id)a1 assetKey:(id)a2;

@end
