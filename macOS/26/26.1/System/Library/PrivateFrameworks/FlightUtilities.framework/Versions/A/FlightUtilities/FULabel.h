@class NSString, NSAttributedString, NSFont;

@interface FULabel : NSTextField {
    NSString *_stringValue;
    NSAttributedString *_attributedStringValue;
    NSFont *_downscaleFont;
    NSFont *_originalFont;
}

@property (copy) id /* block */ onTap;
@property (readonly, nonatomic) BOOL uppercase;
@property (readonly) BOOL useCurrentLocale;
@property unsigned long long maxCharactersDownscale;

- (void)mouseUp:(id)a0;
- (void)setAttributedText:(id)a0;
- (id)text;
- (void)_updateFontForStringLength:(unsigned long long)a0;
- (id)attributedText;
- (void)setStyleProvider:(id)a0 primaryStyle:(BOOL)a1;
- (id)_originalFont;
- (void).cxx_destruct;
- (id)_downscaleFont;
- (void)mouseDown:(id)a0;
- (void)setUppercase:(BOOL)a0 usingCurrentLocale:(BOOL)a1;
- (void)setText:(id)a0;

@end
