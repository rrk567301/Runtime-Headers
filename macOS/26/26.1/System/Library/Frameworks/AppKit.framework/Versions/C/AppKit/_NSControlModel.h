@class NSFormatter, NSAttributedString;

@interface _NSControlModel : NSObject {
    NSFormatter *_formatter;
    BOOL _hasInvalidObject;
}

@property (copy, setter=_setRawContents:) id _rawContents;
@property (retain, setter=_setCachedAttributedString:) NSAttributedString *_cachedAttributedString;
@property (retain) NSFormatter *formatter;
@property (readonly) BOOL hasValidObjectValue;

- (long long)integerValue;
- (id)objectValue;
- (BOOL)setStringValue:(id)a0;
- (BOOL)setDoubleValue:(double)a0;
- (double)doubleValue;
- (int)intValue;
- (id)stringValue;
- (BOOL)setAttributedStringValue:(id)a0;
- (BOOL)setIntegerValue:(long long)a0;
- (BOOL)setObjectValue:(id)a0;
- (BOOL)setFloatValue:(float)a0;
- (void)dealloc;
- (float)floatValue;
- (id)attributedStringValueWithDefaultAttributes:(id)a0;
- (BOOL)setIntValue:(int)a0;

@end
