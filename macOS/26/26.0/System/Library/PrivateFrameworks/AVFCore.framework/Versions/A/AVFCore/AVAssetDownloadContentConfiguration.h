@class NSArray;

@interface AVAssetDownloadContentConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *variantQualifiers;
@property (copy, nonatomic) NSArray *mediaSelections;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (struct FigStreamingAssetDownloadContentConfig { } *)_createFigContentConfigForEnvironmentalCondition:(long long)a0;
- (void)_serializeIntoDownloadConfig:(struct FigStreamingAssetDownloadConfig { } *)a0 asset:(id)a1;
- (void)_serializeIntoDownloadConfig:(struct FigStreamingAssetDownloadConfig { } *)a0 environmentalCondition:(long long)a1;

@end
