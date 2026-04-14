@class NSString;

@interface CUIMutableNamedColor : CUINamedColor {
    NSString *_appearance;
}

- (id)appearance;
- (void)setAppearance:(id)a0;
- (id)init;
- (id)description;
- (void)setCGColor:(struct CGColor { } *)a0;
- (void)dealloc;

@end
