@class NSMutableDictionary;

@interface OADFontCollection : OADBaseFontCollection {
    NSMutableDictionary *_scriptToFontMap;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;
- (id)scripts;
- (id)fontForScript:(id)a0;
- (BOOL)isEqualToFontCollection:(id)a0;
- (void)setFont:(id)a0 forScript:(id)a1;

@end
