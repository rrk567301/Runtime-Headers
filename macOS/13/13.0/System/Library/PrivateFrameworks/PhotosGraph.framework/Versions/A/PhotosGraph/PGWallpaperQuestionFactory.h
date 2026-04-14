@interface PGWallpaperQuestionFactory : PGSurveyQuestionFactory

+ (BOOL)isHighRecallLandscapeAsset:(id)a0;
+ (BOOL)isHighRecallCityscapeAsset:(id)a0;

- (unsigned short)questionType;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (long long)questionOptions;
- (id)_generateTruePositiveQuestionsWithLimit:(unsigned long long)a0 progressReporter:(id)a1;
- (id)evenlySelectQuestionsByType:(id)a0 limit:(unsigned long long)a1;
- (id)_generateTruePositivePeopleQuestionWithLimit:(unsigned long long)a0 suggestionSession:(id)a1 alreadyGeneratedQuestions:(id)a2 progressReporter:(id)a3;
- (id)_generateTruePositivePetQuestionWithLimit:(unsigned long long)a0 suggestionSession:(id)a1 alreadyGeneratedQuestions:(id)a2 progressReporter:(id)a3;
- (id)_generateTruePositiveLandscapeQuestionWithLimit:(unsigned long long)a0 suggestionSession:(id)a1 alreadyGeneratedQuestions:(id)a2 progressReporter:(id)a3;
- (id)_generateTruePositiveCityscapeQuestionWithLimit:(unsigned long long)a0 suggestionSession:(id)a1 alreadyGeneratedQuestions:(id)a2 progressReporter:(id)a3;
- (id)_generateQuestionsWithLimit:(unsigned long long)a0 progressReporter:(id)a1;
- (id)fetchAssetsWithPredicate:(id)a0 assetFilter:(id /* block */)a1;
- (id)fetchPeopleAssets;
- (id)fetchPetAssets;
- (id)fetchLandscapeAssets;
- (id)fetchCityscapeAssets;

@end
