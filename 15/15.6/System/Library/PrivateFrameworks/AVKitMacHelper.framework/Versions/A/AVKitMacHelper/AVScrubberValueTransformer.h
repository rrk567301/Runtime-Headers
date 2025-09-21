@protocol AVScrubberValueTransformerDelegate;

@interface AVScrubberValueTransformer : NSValueTransformer {
    id<AVScrubberValueTransformerDelegate> _delegate;
    struct { char scrubberValueTransformerRequiresTransformation; char scrubberValueTransformer_transformedTimeInterval; char scrubberValueTransformer_reverseTransformedTimeInterval; } _delegateRespondsTo;
}

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)transformedValue:(id)a0;

@end
