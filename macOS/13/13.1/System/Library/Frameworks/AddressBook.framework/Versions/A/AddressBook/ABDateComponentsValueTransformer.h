@class NSString, NSCalendar, CNDateComponentsFormatter, NSLocale;

@interface ABDateComponentsValueTransformer : NSValueTransformer {
    CNDateComponentsFormatter *_dateFormatter;
}

@property (readonly) NSString *dateFormatPlaceholderString;
@property (readonly) NSCalendar *calendar;
@property (nonatomic) BOOL shouldReinterpretAsGregorian;
@property (retain, nonatomic) NSLocale *locale;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)init;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;

@end
