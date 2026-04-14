@class NSString;

@interface CUIMutableNamedColor : CUINamedColor {
    NSString *_appearance;
}

- (id)appearance;
- (id)description;
- (void)setAppearance:(id)a0;
- (id)init;
- (void)setCGColor:(struct CGColor { } *)a0;
- (void)dealloc;

@end
