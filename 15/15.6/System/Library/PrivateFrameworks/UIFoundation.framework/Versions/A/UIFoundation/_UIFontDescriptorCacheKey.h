@class UIFontDescriptor, NSString;

@interface _UIFontDescriptorCacheKey : _UIFontCacheKey

@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double pointSize;
@property (copy, nonatomic) NSString *textStyleForScaling;
@property (nonatomic) double pointSizeForScaling;
@property (nonatomic) double maximumPointSizeAfterScaling;
@property (nonatomic) char textLegibility;

- (void)dealloc;
- (id)description;
- (unsigned long long)_hash;
- (char)_isEqualToKey:(id)a0;

@end
