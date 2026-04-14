@class NSString, NSData;

@interface PHAdjustmentData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isOpaque) BOOL opaque;
@property (copy, nonatomic) NSString *formatIdentifier;
@property (copy, nonatomic) NSString *formatVersion;
@property (copy, nonatomic) NSString *editorBundleID;
@property (nonatomic) long long baseVersion;
@property (readonly) NSData *data;

+ (id)opaqueAdjustmentData;
+ (long long)imageRequestVersionFromAdjustmentBaseVersion:(long long)a0;
+ (long long)adjustmentBaseVersionFromImageRequestVersion:(long long)a0;
+ (long long)videoRequestVersionFromAdjustmentBaseVersion:(long long)a0;
+ (long long)adjustmentBaseVersionFromVideoRequestVersion:(long long)a0;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_hasAdjustments;
- (id)initWithFormatIdentifier:(id)a0 formatVersion:(id)a1 data:(id)a2;
- (BOOL)_contentEditing_containsValidAdjustment;
- (BOOL)_contentEditing_readableByClientWithVerificationBlock:(id /* block */)a0;
- (long long)_contentEditing_requiredBaseVersionReadableByClient:(BOOL *)a0 verificationBlock:(id /* block */)a1;

@end
