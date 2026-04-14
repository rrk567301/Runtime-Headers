@class NSCharacterSet;

@interface AccountsPrefFormatter : NSFormatter {
    long long _maxLength;
    NSCharacterSet *_characterSet;
}

+ (id)maxLengthFormatter:(long long)a0;
+ (id)passwordFormatter;
+ (id)unixNameFormatter;
+ (id)asciiSet;
+ (id)hexSet;

- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (void).cxx_destruct;
- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)initWithMaxLength:(long long)a0;
- (id)initWithCharacterSet:(id)a0 withMaxLength:(long long)a1;

@end
