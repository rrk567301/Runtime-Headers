@class FBKBugForm, NSOrderedSet, NSString, NSArray, NSNumber;

@interface FBKQuestionGroup : FBKManagedFeedbackObject

@property (retain, nonatomic) NSOrderedSet *primitiveQuestions;
@property (retain) NSString *title;
@property (retain) NSNumber *sortOrder;
@property (retain) NSArray *questions;
@property (retain) FBKBugForm *bugForm;

+ (id)entityName;

- (id)description;
- (id)questionWithRole:(id)a0;
- (void)setPropertiesFromJSONObject:(id)a0;
- (BOOL)isFileCollectionGroup;

@end
