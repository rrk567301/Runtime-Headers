@class FBKQuestionGroup, NSDictionary, NSArray;

@interface FBKQuestionGroupDiffableSection : FBKDiffableSection

@property (retain, nonatomic) FBKQuestionGroup *questionGroup;
@property (retain, nonatomic) NSDictionary *questionIdentifiers;
@property (retain, nonatomic) NSArray *orderedRowIdentifiers;

+ (id)identifierForQuestion:(id)a0 formResponse:(id)a1;

- (void).cxx_destruct;
- (id)sectionIdentifier;
- (id)questionWithRowIdentifier:(id)a0;
- (id)initWithQuestionGroup:(id)a0 visibleQuestions:(id)a1 formResponse:(id)a2;
- (id)visibleQuestions;
- (id)rowIdentifiers;

@end
