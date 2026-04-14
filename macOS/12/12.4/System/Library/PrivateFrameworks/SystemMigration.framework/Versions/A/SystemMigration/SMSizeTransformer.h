@class SMSizeFormatter;

@interface SMSizeTransformer : NSValueTransformer

@property (retain) SMSizeFormatter *sizeFormatter;
@property long long textAlignment;

+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (id)initWithPrefixStringID:(long long)a0 localeIdentifier:(id)a1;
- (id)initWithPrefixStringID:(long long)a0;

@end
