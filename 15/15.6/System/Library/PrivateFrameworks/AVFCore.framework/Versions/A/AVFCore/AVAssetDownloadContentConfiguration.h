@class NSArray;

@interface AVAssetDownloadContentConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *variantQualifiers;
@property (copy, nonatomic) NSArray *mediaSelections;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct FigStreamingAssetDownloadContentConfig { } *)_createFigContentConfigForEnvironmentalCondition:(long long)a0;
- (void)_serializeIntoDownloadConfig:(struct FigStreamingAssetDownloadConfig { } *)a0 asset:(id)a1;
- (void)_serializeIntoDownloadConfig:(struct FigStreamingAssetDownloadConfig { } *)a0 environmentalCondition:(long long)a1;

@end
