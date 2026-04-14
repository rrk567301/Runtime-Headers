@class NSString;

@interface CUIMutableNamedColor : CUINamedColor {
    NSString *_appearance;
}

- (void)setAppearance:(id)a0;
- (void)setCGColor:(struct CGColor { } *)a0;
- (id)appearance;
- (id)description;
- (void)dealloc;
- (id)init;

@end
