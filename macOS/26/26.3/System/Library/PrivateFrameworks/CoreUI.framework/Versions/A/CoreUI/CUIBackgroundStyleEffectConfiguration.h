@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    int _shouldRespectOutputBlending;
}

@property (copy) NSString *backgroundType;
@property (nonatomic) BOOL effectShowsValue;

- (void)setShouldRespectOutputBlending:(BOOL)a0;
- (id)description;
- (void)setSelectionType:(long long)a0;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldRespectOutputBlending;
- (BOOL)shouldIgnoreForegroundColor;

@end
