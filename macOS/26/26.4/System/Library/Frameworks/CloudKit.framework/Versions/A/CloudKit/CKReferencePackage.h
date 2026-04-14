@class NSUUID, CKPackageReference, NSData, CKAssetTransferOptions;

@interface CKReferencePackage : CKPackage <NSSecureCoding> {
    NSUUID *_uuid;
    NSData *_boundaryKey;
    CKAssetTransferOptions *_assetTransferOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKPackageReference *packageReference;

- (id)boundaryKey;
- (id)setBoundaryKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isReference;
- (id)UUID;
- (id)assetTransferOptions;
- (id)initWithPackageReference:(id)a0 uuid:(id)a1;
- (void)setAssetTransferOptions:(id)a0;

@end
