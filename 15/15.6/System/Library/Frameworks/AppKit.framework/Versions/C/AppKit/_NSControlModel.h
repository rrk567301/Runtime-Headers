@class NSFormatter, NSAttributedString;

@interface _NSControlModel : NSObject {
    NSFormatter *_formatter;
    char _hasInvalidObject;
}

@property (copy, setter=_setRawContents:) id _rawContents;
@property (retain, setter=_setCachedAttributedString:) NSAttributedString *_cachedAttributedString;
@property (retain) NSFormatter *formatter;
@property (readonly) char hasValidObjectValue;

- (void)dealloc;
- (double)doubleValue;
- (float)floatValue;
- (int)intValue;
- (long long)integerValue;
- (id)stringValue;
- (char)setStringValue:(id)a0;
- (char)setObjectValue:(id)a0;
- (id)objectValue;
- (char)setDoubleValue:(double)a0;
- (id)attributedStringValueWithDefaultAttributes:(id)a0;
- (char)setAttributedStringValue:(id)a0;
- (char)setFloatValue:(float)a0;
- (char)setIntValue:(int)a0;
- (char)setIntegerValue:(long long)a0;

@end
