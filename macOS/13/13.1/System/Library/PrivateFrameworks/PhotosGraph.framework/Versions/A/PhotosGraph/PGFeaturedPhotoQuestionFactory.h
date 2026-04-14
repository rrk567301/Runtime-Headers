@class PGSuggestionSession;

@interface PGFeaturedPhotoQuestionFactory : PGSurveyQuestionFactory {
    PGSuggestionSession *_suggestionSession;
}

- (void).cxx_destruct;
- (unsigned short)questionType;
- (id)initWithWorkingContext:(id)a0 questionVersion:(short)a1;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (long long)questionOptions;
- (id)randomAssetsUUIDsWithLimit:(unsigned long long)a0;

@end
