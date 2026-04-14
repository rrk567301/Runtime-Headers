@class NSFormatter, NSAttributedString;

@interface _NSControlModel : NSObject {
    NSFormatter *_formatter;
    BOOL _hasInvalidObject;
}

@property (copy, setter=_setRawContents:) id _rawContents;
@property (retain, setter=_setCachedAttributedString:) NSAttributedString *_cachedAttributedString;
@property (retain) NSFormatter *formatter;
@property (readonly) BOOL hasValidObjectValue;

- (float)floatValue;
- (int)intValue;
- (id)objectValue;
- (BOOL)setIntegerValue:(long long)a0;
- (long long)integerValue;
- (BOOL)setFloatValue:(float)a0;
- (BOOL)setObjectValue:(id)a0;
- (BOOL)setStringValue:(id)a0;
- (BOOL)setAttributedStringValue:(id)a0;
- (BOOL)setDoubleValue:(double)a0;
- (double)doubleValue;
- (id)stringValue;
- (void)dealloc;
- (id)attributedStringValueWithDefaultAttributes:(id)a0;
- (BOOL)setIntValue:(int)a0;

@end
