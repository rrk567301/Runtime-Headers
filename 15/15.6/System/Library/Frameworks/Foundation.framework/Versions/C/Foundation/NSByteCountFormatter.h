@class NSString;

@interface NSByteCountFormatter : NSFormatter <NSObservable, NSObserver> {
    unsigned int _allowedUnits;
    int _formattingContext;
    char _countStyle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property unsigned long long allowedUnits;
@property long long countStyle;
@property char allowsNonnumericFormatting;
@property char includesUnit;
@property char includesCount;
@property char includesActualByteCount;
@property (getter=isAdaptive) char adaptive;
@property char zeroPadsFractionDigits;
@property long long formattingContext;

+ (id)stringFromByteCount:(long long)a0 countStyle:(long long)a1;
+ (id)stringFromMeasurement:(id)a0 countStyle:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_mayDecorateAttributedStringForObjectValue:(id)a0;
- (unsigned long long)_options;
- (char)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (char)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (void)receiveObservedValue:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (id)stringFromByteCount:(long long)a0;
- (id)stringFromMeasurement:(id)a0;

@end
