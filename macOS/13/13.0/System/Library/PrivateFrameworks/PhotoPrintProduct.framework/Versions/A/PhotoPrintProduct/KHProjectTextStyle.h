@class NSString;

@interface KHProjectTextStyle : KHModel {
    long long _projectId;
    long long _styleId;
    NSString *_font;
    long long _fontSize;
    double _leading;
    double _kerning;
    long long _verticalAlignment;
    long long _horizontalAlignment;
    NSString *_color;
    double _lineSpacing;
    NSString *_styleIdentifier;
}

- (void)dealloc;
- (double)lineSpacing;
- (void)setLineSpacing:(double)a0;
- (id)color;
- (void)setColor:(id)a0;
- (id)font;
- (void)setFont:(id)a0;
- (void)setHorizontalAlignment:(long long)a0;
- (void)setVerticalAlignment:(long long)a0;
- (long long)horizontalAlignment;
- (long long)verticalAlignment;
- (double)leading;
- (long long)fontSize;
- (void)setFontSize:(long long)a0;
- (id)clone;
- (long long)styleId;
- (void)setStyleId:(long long)a0;
- (double)kerning;
- (void)setKerning:(double)a0;
- (void)setProjectId:(long long)a0;
- (long long)projectId;
- (void)setLeading:(double)a0;
- (id)styleIdentifier;
- (void)setStyleIdentifier:(id)a0;
- (BOOL)isProjectModel;
- (id)cloneInDatabase:(id)a0;
- (void)cacheProjectId:(long long)a0;
- (void)cacheFont:(id)a0;
- (void)cacheStyleId:(long long)a0;
- (void)cacheStyleIdentifier:(id)a0;
- (void)cacheFontSize:(long long)a0;
- (void)cacheLeading:(double)a0;
- (void)cacheKerning:(double)a0;
- (void)cacheVerticalAlignment:(long long)a0;
- (void)cacheHorizontalAlignment:(long long)a0;
- (void)cacheColor:(id)a0;
- (void)cacheLineSpacing:(double)a0;
- (void)cacheColumns:(long long)a0;

@end
