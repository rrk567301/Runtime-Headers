@class NSString, NSData, NSDate;

@interface PHAdjustmentData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, getter=isOpaque) char opaque;
@property (copy, nonatomic) NSDate *adjustmentTimestamp;
@property (copy, nonatomic) NSString *formatIdentifier;
@property (copy, nonatomic) NSString *formatVersion;
@property (copy, nonatomic) NSString *editorBundleID;
@property (nonatomic) long long baseVersion;
@property (nonatomic) unsigned int adjustmentRenderTypes;
@property (readonly) NSData *data;

+ (long long)adjustmentBaseVersionFromImageRequestVersion:(long long)a0;
+ (long long)adjustmentBaseVersionFromVideoRequestVersion:(long long)a0;
+ (long long)imageRequestVersionFromAdjustmentBaseVersion:(long long)a0;
+ (id)opaqueAdjustmentData;
+ (long long)videoRequestVersionFromAdjustmentBaseVersion:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_hasAdjustments;
- (id)dataUsingAssetResourceEncoding:(id *)a0;
- (char)_contentEditing_containsValidAdjustment;
- (char)_contentEditing_readableByClientWithVerificationBlock:(id /* block */)a0;
- (long long)_contentEditing_requiredBaseVersionReadableByClient:(char *)a0 verificationBlock:(id /* block */)a1;
- (id)initWithDataUsingAssetResourceEncoding:(id)a0 error:(id *)a1;
- (id)initWithFormatIdentifier:(id)a0 formatVersion:(id)a1 adjustmentRenderType:(id)a2 data:(id)a3;
- (id)initWithFormatIdentifier:(id)a0 formatVersion:(id)a1 data:(id)a2;

@end
