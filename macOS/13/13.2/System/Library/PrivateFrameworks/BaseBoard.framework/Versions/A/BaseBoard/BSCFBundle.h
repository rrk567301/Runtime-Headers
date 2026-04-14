@interface BSCFBundle : NSObject {
    struct __CFBundle { } *_cfBundle;
}

- (void)dealloc;
- (id)description;
- (id)initWithURL:(id)a0;
- (id)pathForResource:(id)a0 ofType:(id)a1;
- (id)bundlePath;
- (id)bundleIdentifier;
- (id)infoDictionary;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)initWithPath:(id)a0;
- (id)pathForResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)executablePath;
- (id)localizedInfoDictionary;
- (struct __CFBundle { } *)cfBundle;

@end
