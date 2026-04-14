@interface BSCFBundle : NSObject {
    struct __CFBundle { } *_cfBundle;
}

- (id)infoDictionary;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)bundlePath;
- (id)initWithURL:(id)a0;
- (struct __CFBundle { } *)cfBundle;
- (id)bundleIdentifier;
- (id)description;
- (id)localizedInfoDictionary;
- (id)executablePath;
- (id)initWithPath:(id)a0;
- (id)pathForResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)pathForResource:(id)a0 ofType:(id)a1;
- (void)dealloc;

@end
