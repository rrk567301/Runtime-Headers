@interface LPARAssetAttachmentSubstitute : LPARAsset <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long index;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isSubstitute;
- (id)initWithARAsset:(id)a0;

@end
