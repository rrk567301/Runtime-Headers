@interface PGTripKeyAssetQuestionFactory : PGSurveyQuestionFactory

- (unsigned short)questionType;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (long long)questionOptions;
- (void)_enumerateTrips:(id /* block */)a0;

@end
