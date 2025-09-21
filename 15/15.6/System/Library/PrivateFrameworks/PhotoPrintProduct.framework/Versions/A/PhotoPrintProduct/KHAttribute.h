@class NSString, KHColor, NSArray;

@interface KHAttribute : KHModel {
    NSString *_key;
    NSString *_valueType;
    NSString *_value;
    struct { double x; double y; char isRelativeX; char isRelativeY; } _cachedPoint;
    struct { double width; char isRelativeWidth; double height; char isRelativeHeight; } _cachedSize;
    KHColor *_cachedColor;
    long long _cachedInteger;
    float _cachedFloat;
    char _cachedBool;
    NSArray *_cachedArray;
    struct { struct { double x; double y; char isRelativeX; char isRelativeY; } start; struct { double x; double y; char isRelativeX; char isRelativeY; } end; } _cachedLine;
    struct { struct { double x; double y; char isRelativeX; char isRelativeY; } origin; struct { double width; char isRelativeWidth; double height; char isRelativeHeight; } size; } _cachedRect;
    struct { struct { double x; double y; char isRelativeX; char isRelativeY; } origin; struct { double width; char isRelativeWidth; double height; char isRelativeHeight; } size; } _cachedEllipse;
}

- (void)dealloc;
- (id)description;
- (float)floatValue;
- (char)boolValue;
- (long long)integerValue;
- (id)stringValue;
- (id)value;
- (id)key;
- (void)setKey:(id)a0;
- (struct { double x0; double x1; char x2; char x3; })pointValue;
- (struct { struct { double x0; double x1; char x2; char x3; } x0; struct { double x0; char x1; double x2; char x3; } x1; })rectValue;
- (void)remove;
- (void)setValue:(id)a0;
- (struct { double x0; char x1; double x2; char x3; })sizeValue;
- (id)valueType;
- (id)arrayValue;
- (void)setValueType:(id)a0;
- (id)colorValue;
- (void)cacheKey:(id)a0;
- (void)cacheValueType:(id)a0;
- (void)setValue:(id)a0 force:(char)a1;
- (void)_convertValue;
- (void)cacheValue:(id)a0;
- (struct { struct { double x0; double x1; char x2; char x3; } x0; struct { double x0; char x1; double x2; char x3; } x1; })ellipseValue;
- (struct { struct { double x0; double x1; char x2; char x3; } x0; struct { double x0; double x1; char x2; char x3; } x1; })lineValue;

@end
