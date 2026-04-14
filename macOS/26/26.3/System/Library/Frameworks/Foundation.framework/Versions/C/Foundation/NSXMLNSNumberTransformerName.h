@class NSNumberFormatter;

@interface NSXMLNSNumberTransformerName : NSValueTransformer {
    NSNumberFormatter *_formatter;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)init;
- (void)dealloc;
- (id)_oldTransformedValue:(id)a0;

@end
