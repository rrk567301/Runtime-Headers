@class NSString, NSCalendar, CNDateComponentsFormatter, NSLocale;

@interface ABDateComponentsValueTransformer : NSValueTransformer {
    CNDateComponentsFormatter *_dateFormatter;
}

@property (readonly) NSString *dateFormatPlaceholderString;
@property (readonly) NSCalendar *calendar;
@property (nonatomic) BOOL shouldReinterpretAsGregorian;
@property (retain, nonatomic) NSLocale *locale;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)init;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
