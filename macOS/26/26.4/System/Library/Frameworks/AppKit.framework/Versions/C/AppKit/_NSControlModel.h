@class NSFormatter, NSAttributedString;

@interface _NSControlModel : NSObject {
    NSFormatter *_formatter;
    BOOL _hasInvalidObject;
}

@property (copy, setter=_setRawContents:) id _rawContents;
@property (retain, setter=_setCachedAttributedString:) NSAttributedString *_cachedAttributedString;
@property (retain) NSFormatter *formatter;
@property (readonly) BOOL hasValidObjectValue;

- (BOOL)setIntegerValue:(long long)a0;
- (BOOL)setStringValue:(id)a0;
- (id)stringValue;
- (BOOL)setObjectValue:(id)a0;
- (BOOL)setDoubleValue:(double)a0;
- (id)objectValue;
- (double)doubleValue;
- (long long)integerValue;
- (int)intValue;
- (float)floatValue;
- (BOOL)setAttributedStringValue:(id)a0;
- (void)dealloc;
- (BOOL)setFloatValue:(float)a0;
- (id)attributedStringValueWithDefaultAttributes:(id)a0;
- (BOOL)setIntValue:(int)a0;

@end
