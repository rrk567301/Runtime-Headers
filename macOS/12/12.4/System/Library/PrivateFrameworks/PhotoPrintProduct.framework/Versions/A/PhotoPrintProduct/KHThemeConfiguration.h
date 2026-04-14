@interface KHThemeConfiguration : KHModel {
    long long _themeId;
    long long _configurationId;
}

+ (id)defaultConfigurationForTheme:(id)a0;
+ (id)allConfigurationsForTheme:(id)a0;

- (void)dealloc;
- (id)configuration;
- (id)theme;
- (long long)themeId;
- (void)cacheThemeId:(long long)a0;
- (long long)configurationId;
- (void)cacheConfigurationId:(long long)a0;
- (void)setThemeId:(long long)a0;
- (void)setConfigurationId:(long long)a0;

@end
