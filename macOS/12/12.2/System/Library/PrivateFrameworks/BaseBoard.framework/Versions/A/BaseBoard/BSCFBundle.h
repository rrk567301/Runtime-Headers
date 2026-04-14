@interface BSCFBundle : NSObject {
    struct __CFBundle { } *_cfBundle;
}

- (void)dealloc;
- (id)description;
- (id)initWithURL:(id)a0;
- (id)infoDictionary;
- (id)bundleIdentifier;
- (id)bundlePath;
- (id)pathForResource:(id)a0 ofType:(id)a1;
- (id)initWithPath:(id)a0;
- (id)localizedInfoDictionary;
- (id)pathForResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)executablePath;
- (struct __CFBundle { } *)cfBundle;

@end
