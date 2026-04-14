@interface PGPetQuestionFactory : PGSurveyQuestionFactory

+ (id)petSceneLabels;

- (unsigned short)questionType;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (long long)questionOptions;
- (id)momentsForPetInPhotoLibrary:(id)a0 withGraph:(id)a1;
- (id)initialPetQuestion;
- (void)updateInitialQuestion:(id)a0;

@end
