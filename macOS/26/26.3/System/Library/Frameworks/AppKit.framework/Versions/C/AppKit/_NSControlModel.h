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
- (BOOL)setObjectValue:(id)a0;
- (int)intValue;
- (BOOL)setStringValue:(id)a0;
- (BOOL)setIntegerValue:(long long)a0;
- (BOOL)setDoubleValue:(double)a0;
- (BOOL)setAttributedStringValue:(id)a0;
- (BOOL)setFloatValue:(float)a0;
- (long long)integerValue;
- (double)doubleValue;
- (id)objectValue;
- (void)dealloc;
- (id)stringValue;
- (id)attributedStringValueWithDefaultAttributes:(id)a0;
- (BOOL)setIntValue:(int)a0;

@end
