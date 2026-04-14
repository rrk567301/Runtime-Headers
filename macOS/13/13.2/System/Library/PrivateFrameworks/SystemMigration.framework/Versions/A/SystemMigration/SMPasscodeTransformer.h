@class NSNumberFormatter;

@interface SMPasscodeTransformer : NSValueTransformer {
    NSNumberFormatter *formatter;
}

+ (Class)transformedValueClass;

- (id)init;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
