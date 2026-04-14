@class NSNumberFormatter;

@interface NSXMLNSNumberTransformerName : NSValueTransformer {
    NSNumberFormatter *_formatter;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (void)dealloc;
- (id)init;
- (id)transformedValue:(id)a0;
- (id)_oldTransformedValue:(id)a0;

@end
