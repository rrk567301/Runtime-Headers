@interface PGRelationshipQuestionFactory : PGSurveyQuestionFactory

+ (id)relationshipTypesByRelationshipLabel;
+ (id)localFactoryScoreByRelationshipLabels;
+ (id)relationshipLabelsRequiringInitialQuestion;
+ (id)displayStringForRelationshipLabel:(id)a0;

- (unsigned short)questionType;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (long long)questionOptions;
- (void)updateInitialQuestion:(id)a0;
- (id)initialQuestionForRelationshipLabel:(id)a0;

@end
