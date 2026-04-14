@class NSString, KHTextStyle;

@interface KHConfigurationTextStyle : KHModel {
    long long _configurationId;
    long long _textStyleId;
    NSString *_textStyleName;
    NSString *_designTag;
    long long _type;
    KHTextStyle *_textStyle;
}

+ (id)textStylesForConfiguration:(id)a0 type:(unsigned long long)a1;

- (void)dealloc;
- (long long)type;
- (void)setType:(long long)a0;
- (id)textStyle;
- (void)cacheType:(long long)a0;
- (long long)configurationId;
- (void)cacheConfigurationId:(long long)a0;
- (void)setConfigurationId:(long long)a0;
- (long long)textStyleId;
- (void)cacheTextStyleId:(long long)a0;
- (void)setTextStyleId:(long long)a0;
- (id)textStyleName;
- (void)cacheTextStyleName:(id)a0;
- (void)setTextStyleName:(id)a0;
- (id)designTag;
- (void)cacheDesignTag:(id)a0;
- (void)setDesignTag:(id)a0;

@end
