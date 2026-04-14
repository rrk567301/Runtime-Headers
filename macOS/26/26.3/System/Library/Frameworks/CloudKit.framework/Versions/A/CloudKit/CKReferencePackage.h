@class NSUUID, CKPackageReference, NSData, CKAssetTransferOptions;

@interface CKReferencePackage : CKPackage <NSSecureCoding> {
    NSUUID *_uuid;
    NSData *_boundaryKey;
    CKAssetTransferOptions *_assetTransferOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKPackageReference *packageReference;

- (id)UUID;
- (id)setBoundaryKey:(id)a0;
- (BOOL)isReference;
- (id)description;
- (id)boundaryKey;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)assetTransferOptions;
- (id)initWithPackageReference:(id)a0 uuid:(id)a1;
- (void)setAssetTransferOptions:(id)a0;

@end
