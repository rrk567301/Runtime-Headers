@class NSCharacterSet;

@interface WBSCrowdsourcedFeedbackDomainNormalizer : NSValueTransformer {
    NSCharacterSet *_dotCharacterSet;
}

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
