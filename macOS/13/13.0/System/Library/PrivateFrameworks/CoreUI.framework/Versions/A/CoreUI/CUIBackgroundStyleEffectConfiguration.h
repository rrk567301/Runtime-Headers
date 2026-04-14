@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    int _shouldRespectOutputBlending;
}

@property (copy, nonatomic) NSString *backgroundType;
@property (nonatomic) BOOL effectShowsValue;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSelectionType:(long long)a0;
- (void)setShouldRespectOutputBlending:(BOOL)a0;
- (BOOL)shouldIgnoreForegroundColor;
- (BOOL)shouldRespectOutputBlending;

@end
