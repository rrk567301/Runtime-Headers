@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    int _shouldRespectOutputBlending;
}

@property (copy) NSString *backgroundType;
@property (nonatomic) BOOL effectShowsValue;

- (BOOL)shouldIgnoreForegroundColor;
- (BOOL)shouldRespectOutputBlending;
- (id)description;
- (void)dealloc;
- (void)setShouldRespectOutputBlending:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSelectionType:(long long)a0;
- (id)init;

@end
