@interface BSCFBundle : NSObject {
    struct __CFBundle { } *_cfBundle;
}

- (id)initWithPath:(id)a0;
- (id)infoDictionary;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)bundlePath;
- (id)initWithURL:(id)a0;
- (id)executablePath;
- (id)pathForResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (struct __CFBundle { } *)cfBundle;
- (id)localizedInfoDictionary;
- (id)description;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)pathForResource:(id)a0 ofType:(id)a1;

@end
