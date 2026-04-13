@class FBKQuestion, FBKFormResponse, NSArray, NSNumber;

@interface FBKAnswer : FBKManagedFeedbackObject

@property (retain) NSNumber *primitiveOptedOut;
@property (retain) FBKFormResponse *formResponse;
@property (retain) FBKQuestion *question;
@property (retain) NSNumber *questionID;
@property (copy) NSArray *values;
@property (retain) id value;
@property (getter=isOptedOut) BOOL optedOut;
@property BOOL resolved;

+ (id)entityName;
+ (id)emptyLocalAnswerForQuestionID:(id)a0 inFormResponse:(id)a1;
+ (id)_importByQuestionIDFromJSONArray:(id)a0 withFormResponseID:(id)a1 intoContext:(id)a2;
+ (unsigned long long)answerTypeFromString:(id)a0;
+ (id)keyPathsForValuesAffectingValue;

- (id)question;
- (void)setPropertiesFromJSONObject:(id)a0;

@end
