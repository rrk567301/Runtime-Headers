@class FBKBugForm, NSOrderedSet, NSString, NSArray, NSNumber;

@interface FBKQuestionGroup : FBKManagedFeedbackObject

@property (retain, nonatomic) NSOrderedSet *primitiveQuestions;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *sortOrder;
@property (retain, nonatomic) NSArray *questions;
@property (retain, nonatomic) FBKBugForm *bugForm;

+ (id)entityName;
+ (id)uniquingKey;

- (id)description;
- (id)questionWithRole:(id)a0;
- (BOOL)isFileCollectionGroup;
- (void)setPropertiesFromJSONObject:(id)a0;

@end
