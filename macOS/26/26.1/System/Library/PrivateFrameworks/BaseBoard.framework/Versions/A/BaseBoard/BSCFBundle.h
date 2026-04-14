@interface BSCFBundle : NSObject {
    struct __CFBundle { } *_cfBundle;
}

- (id)bundlePath;
- (id)initWithPath:(id)a0;
- (id)infoDictionary;
- (id)executablePath;
- (struct __CFBundle { } *)cfBundle;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)pathForResource:(id)a0 ofType:(id)a1;
- (id)initWithURL:(id)a0;
- (id)description;
- (void)dealloc;
- (id)pathForResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (id)localizedInfoDictionary;
- (id)bundleIdentifier;

@end
