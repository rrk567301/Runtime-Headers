@class NSString, KHColor, NSArray;

@interface KHAttribute : KHModel {
    NSString *_key;
    NSString *_valueType;
    NSString *_value;
    struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } _cachedPoint;
    struct { double width; BOOL isRelativeWidth; double height; BOOL isRelativeHeight; } _cachedSize;
    KHColor *_cachedColor;
    long long _cachedInteger;
    float _cachedFloat;
    BOOL _cachedBool;
    NSArray *_cachedArray;
    struct { struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } start; struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } end; } _cachedLine;
    struct { struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } origin; struct { double width; BOOL isRelativeWidth; double height; BOOL isRelativeHeight; } size; } _cachedRect;
    struct { struct { double x; double y; BOOL isRelativeX; BOOL isRelativeY; } origin; struct { double width; BOOL isRelativeWidth; double height; BOOL isRelativeHeight; } size; } _cachedEllipse;
}

- (void)dealloc;
- (id)description;
- (float)floatValue;
- (id)stringValue;
- (long long)integerValue;
- (BOOL)boolValue;
- (id)key;
- (id)value;
- (void)setKey:(id)a0;
- (void)setValue:(id)a0;
- (void)remove;
- (struct { double x0; double x1; BOOL x2; BOOL x3; })pointValue;
- (struct { double x0; BOOL x1; double x2; BOOL x3; })sizeValue;
- (struct { struct { double x0; double x1; BOOL x2; BOOL x3; } x0; struct { double x0; BOOL x1; double x2; BOOL x3; } x1; })rectValue;
- (id)valueType;
- (id)arrayValue;
- (void)setValueType:(id)a0;
- (id)colorValue;
- (void)cacheKey:(id)a0;
- (void)cacheValueType:(id)a0;
- (void)cacheValue:(id)a0;
- (void)setValue:(id)a0 force:(BOOL)a1;
- (struct { struct { double x0; double x1; BOOL x2; BOOL x3; } x0; struct { double x0; double x1; BOOL x2; BOOL x3; } x1; })lineValue;
- (struct { struct { double x0; double x1; BOOL x2; BOOL x3; } x0; struct { double x0; BOOL x1; double x2; BOOL x3; } x1; })ellipseValue;
- (void)_convertValue;

@end
