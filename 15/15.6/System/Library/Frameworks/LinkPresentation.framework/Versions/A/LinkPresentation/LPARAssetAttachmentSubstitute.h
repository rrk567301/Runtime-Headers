@interface LPARAssetAttachmentSubstitute : LPARAsset <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long index;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_isSubstitute;
- (id)initWithARAsset:(id)a0;

@end
