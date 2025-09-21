@interface BSCFBundle : NSObject {
    struct __CFBundle { } *_cfBundle;
}

- (id)initWithPath:(id)a0;
- (id)executablePath;
- (id)pathForResource:(id)a0 ofType:(id)a1;
- (id)bundlePath;
- (id)bundleIdentifier;
- (id)infoDictionary;
- (void)dealloc;
- (id)localizedInfoDictionary;
- (struct __CFBundle { } *)cfBundle;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)description;
- (id)initWithURL:(id)a0;
- (id)pathForResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;

@end
