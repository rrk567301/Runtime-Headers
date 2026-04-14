@interface PGMemoryQualityQuestionFactory : PGSurveyQuestionFactory

- (unsigned short)questionType;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (long long)questionOptions;

@end
