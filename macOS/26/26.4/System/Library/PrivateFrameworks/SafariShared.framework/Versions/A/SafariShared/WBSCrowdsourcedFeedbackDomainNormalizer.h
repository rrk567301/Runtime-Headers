@class NSCharacterSet;

@interface WBSCrowdsourcedFeedbackDomainNormalizer : NSValueTransformer {
    NSCharacterSet *_dotCharacterSet;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)init;
- (id)transformedValue:(id)a0;

@end
