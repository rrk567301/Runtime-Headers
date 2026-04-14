@class NSDictionary, NSString, NSArray;

@interface MTLCompileOptionsInternal : MTLCompileOptions {
    BOOL _userSetLanguageVersion;
    NSDictionary *_preprocessorMacros;
    BOOL _fastMathEnabled;
    BOOL _framebufferReadEnabled;
    BOOL _tracingEnabled;
    BOOL _debuggingEnabled;
    unsigned long long _languageVersion;
    BOOL _compileTimeStatisticsEnabled;
    NSString *_additionalCompilerArguments;
    unsigned char _sourceLanguage;
    long long _libraryType;
    NSArray *_libraries;
    NSString *_installName;
    BOOL _preserveInvariance;
    long long _optimizationLevel;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLibraries:(id)a0;
- (void)setAdditionalCompilerArguments:(id)a0;
- (id)libraries;
- (id)additionalCompilerArguments;
- (id)formattedDescription:(unsigned long long)a0;
- (id)installName;
- (void)setTracingEnabled:(BOOL)a0;
- (BOOL)tracingEnabled;
- (BOOL)framebufferReadEnabled;
- (BOOL)debuggingEnabled;
- (BOOL)compileTimeStatisticsEnabled;
- (unsigned char)sourceLanguage;
- (id)preprocessorMacros;
- (BOOL)fastMathEnabled;
- (unsigned long long)languageVersion;
- (long long)libraryType;
- (BOOL)preserveInvariance;
- (long long)optimizationLevel;
- (void)setPreprocessorMacros:(id)a0;
- (void)setLanguageVersion:(unsigned long long)a0;
- (id)exportDictionary;
- (void)importDictionary:(id)a0;
- (void)setFastMathEnabled:(BOOL)a0;
- (void)setDebuggingEnabled:(BOOL)a0;
- (void)setFramebufferReadEnabled:(BOOL)a0;
- (void)setCompileTimeStatisticsEnabled:(BOOL)a0;
- (void)setSourceLanguage:(unsigned char)a0;
- (void)setLibraryType:(long long)a0;
- (void)setInstallName:(id)a0;
- (void)setPreserveInvariance:(BOOL)a0;
- (void)setOptimizationLevel:(long long)a0;

@end
