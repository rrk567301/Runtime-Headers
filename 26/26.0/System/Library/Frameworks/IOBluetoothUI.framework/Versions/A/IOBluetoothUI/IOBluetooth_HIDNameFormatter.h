@interface IOBluetooth_HIDNameFormatter : NSFormatter {
    int _maxLength;
}

+ (id)maxLengthFormatter:(int)a0;

- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)initWithMaxLength:(int)a0;

@end
