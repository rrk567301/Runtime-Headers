@interface _BlastDoorLPARAssetAttachmentSubstitute : _BlastDoorLPARAsset <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long index;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithARAsset:(id)a0;
- (char)_shouldEncodeData;

@end
