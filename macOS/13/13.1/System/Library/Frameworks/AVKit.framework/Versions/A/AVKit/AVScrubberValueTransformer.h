@protocol AVScrubberValueTransformerDelegate;

@interface AVScrubberValueTransformer : NSValueTransformer {
    id<AVScrubberValueTransformerDelegate> _delegate;
    struct { BOOL scrubberValueTransformerRequiresTransformation; BOOL scrubberValueTransformer_transformedTimeInterval; BOOL scrubberValueTransformer_reverseTransformedTimeInterval; } _delegateRespondsTo;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)initWithDelegate:(id)a0;

@end
