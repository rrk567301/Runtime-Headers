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

- (void)setProjectId:(long long)a0;
- (void)setFontSize:(long long)a0;
- (double)lineSpacing;
- (void)setLineSpacing:(double)a0;
- (id)color;
- (double)kerning;
- (void)setColor:(id)a0;
- (double)leading;
- (long long)fontSize;
- (void)setKerning:(double)a0;
- (id)font;
- (void)setFont:(id)a0;
- (long long)projectId;
- (void)dealloc;
- (id)clone;
- (long long)horizontalAlignment;
- (void)setHorizontalAlignment:(long long)a0;
- (void)setVerticalAlignment:(long long)a0;
- (long long)verticalAlignment;
- (long long)styleId;
- (void)setStyleId:(long long)a0;
- (void)setLeading:(double)a0;
- (id)styleIdentifier;
- (void)setStyleIdentifier:(id)a0;
- (void)cacheProjectId:(long long)a0;
- (void)cacheColor:(id)a0;
- (void)cacheColumns:(long long)a0;
- (void)cacheFont:(id)a0;
- (void)cacheFontSize:(long long)a0;
- (void)cacheHorizontalAlignment:(long long)a0;
- (void)cacheKerning:(double)a0;
- (void)cacheLeading:(double)a0;
- (void)cacheLineSpacing:(double)a0;
- (void)cacheStyleId:(long long)a0;
- (void)cacheStyleIdentifier:(id)a0;
- (void)cacheVerticalAlignment:(long long)a0;
- (id)cloneInDatabase:(id)a0;
- (BOOL)isProjectModel;

@end
