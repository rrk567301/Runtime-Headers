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

- (float)floatValue;
- (long long)integerValue;
- (void)remove;
- (void)setValueType:(id)a0;
- (struct { double x0; double x1; BOOL x2; BOOL x3; })pointValue;
- (id)valueType;
- (BOOL)boolValue;
- (void)setValue:(id)a0;
- (id)description;
- (id)stringValue;
- (id)value;
- (id)arrayValue;
- (void)cacheKey:(id)a0;
- (void)setKey:(id)a0;
- (id)key;
- (void)dealloc;
- (struct { struct { double x0; double x1; BOOL x2; BOOL x3; } x0; struct { double x0; BOOL x1; double x2; BOOL x3; } x1; })rectValue;
- (struct { double x0; BOOL x1; double x2; BOOL x3; })sizeValue;
- (id)colorValue;
- (void)cacheValueType:(id)a0;
- (void)setValue:(id)a0 force:(BOOL)a1;
- (void)_convertValue;
- (void)cacheValue:(id)a0;
- (struct { struct { double x0; double x1; BOOL x2; BOOL x3; } x0; struct { double x0; BOOL x1; double x2; BOOL x3; } x1; })ellipseValue;
- (struct { struct { double x0; double x1; BOOL x2; BOOL x3; } x0; struct { double x0; double x1; BOOL x2; BOOL x3; } x1; })lineValue;

@end
