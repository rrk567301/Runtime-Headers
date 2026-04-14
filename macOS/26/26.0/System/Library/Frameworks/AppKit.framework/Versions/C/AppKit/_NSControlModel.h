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
- (BOOL)setObjectValue:(id)a0;
- (BOOL)setDoubleValue:(double)a0;
- (float)floatValue;
- (BOOL)setIntegerValue:(long long)a0;
- (void)dealloc;
- (BOOL)setStringValue:(id)a0;
- (BOOL)setAttributedStringValue:(id)a0;
- (id)stringValue;
- (double)doubleValue;
- (BOOL)setFloatValue:(float)a0;
- (int)intValue;
- (id)attributedStringValueWithDefaultAttributes:(id)a0;
- (BOOL)setIntValue:(int)a0;

@end
