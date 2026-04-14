@class NSAttributedString;

@interface NSStringMeasurementCacheKey : NSObject <NSCopying> {
    NSAttributedString *_string;
    struct CGSize { double width; double height; } _size;
    long long _options;
    unsigned long long _maximumNumberOfLines;
    BOOL _inTouchBar;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setAttributedString:(id)a0 size:(struct CGSize { double x0; double x1; })a1 options:(long long)a2 maximumNumberOfLines:(unsigned long long)a3 appearance:(id)a4;

@end
