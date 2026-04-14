@class PGSuggestionSession;

@interface PGFeaturedPhotoQuestionFactory : PGSurveyQuestionFactory {
    PGSuggestionSession *_suggestionSession;
}

- (void).cxx_destruct;
- (unsigned short)questionType;
- (id)initWithWorkingContext:(id)a0;
- (long long)questionOptions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (id)randomAssetsUUIDsWithLimit:(unsigned long long)a0;

@end
