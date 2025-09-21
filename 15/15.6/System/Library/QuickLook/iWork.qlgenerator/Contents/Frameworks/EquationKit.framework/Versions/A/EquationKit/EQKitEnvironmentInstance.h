@class NSDictionary;

@interface EQKitEnvironmentInstance : EQKitEnvironment {
    NSDictionary *mConfig;
    void *mOperatorDictionary;
    struct Manager { void /* function */ **x0; struct STIXCollection *x1; struct EQKitCacheLRUCounter { unsigned long long x0; } x2; } *mFontManager;
    void *mKerningManager;
    struct Config { int x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *mLayoutConfig;
    void *mBlahtexConfig;
}

@property (nonatomic) char kerning;

+ (id)defaultEnvironment;
+ (id)dataForEnvironment:(id)a0;
+ (id)environmentFromData:(id)a0;
+ (id)dataForDefaultEnvironment;

- (void)dealloc;
- (id)initWithConfig:(id)a0;
- (const struct Manager { void /* function */ **x0; struct STIXCollection *x1; struct EQKitCacheLRUCounter { unsigned long long x0; } x2; } *)fontManager;
- (void)beginLayout;
- (void)endLayout;
- (const void *)kerningManager;
- (const struct Config { int x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)layoutConfig;
- (id)newDictionaryForArchiving;
- (const void *)operatorDictionary;
- (const void *)blahtexConfig;
- (void)reloadFonts;

@end
