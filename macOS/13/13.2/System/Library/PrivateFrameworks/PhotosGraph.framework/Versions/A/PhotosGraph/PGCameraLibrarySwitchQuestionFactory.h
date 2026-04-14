@interface PGCameraLibrarySwitchQuestionFactory : PGSurveyQuestionFactory

+ (BOOL)isSharedLibraryQuestionsEnabledForPhotoLibrary:(id)a0;
+ (id)_libraryScopeFromPhotoLibrary:(id)a0;

- (unsigned short)questionType;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (long long)questionOptions;
- (id)collidingQuestionTypes;
- (id)_momentsForQuestions;
- (id)_assetsFetchResultFromMoment:(id)a0;

@end
