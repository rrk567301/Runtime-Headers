@interface CHPostprocessingStep : NSObject

@property (readonly) char modifiesOriginalTokens;

+ (char)shouldAdjustColumnsFromPostprocessingStepOptions:(id)a0;

- (id)process:(id)a0 options:(id)a1;

@end
