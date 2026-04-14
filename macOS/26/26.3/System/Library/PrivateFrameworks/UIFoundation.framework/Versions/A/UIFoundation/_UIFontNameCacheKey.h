@class NSString;

@interface _UIFontNameCacheKey : _UIFontCacheKey

@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) int traits;
@property (nonatomic) double pointSize;

- (BOOL)_isEqualToKey:(id)a0;
- (id)description;
- (unsigned long long)_hash;
- (void)dealloc;

@end
