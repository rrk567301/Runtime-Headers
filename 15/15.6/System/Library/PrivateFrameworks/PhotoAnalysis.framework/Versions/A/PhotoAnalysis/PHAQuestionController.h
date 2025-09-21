@class NSObject, NSMutableDictionary, PGTrialSession, NSUbiquitousKeyValueStore, PGManager;
@protocol OS_os_log;

@interface PHAQuestionController : NSObject {
    short _currentQuestionVersion;
}

@property (retain, nonatomic) PGManager *graphManager;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (retain, nonatomic) NSUbiquitousKeyValueStore *store;
@property (retain, nonatomic) PGTrialSession *trialSession;
@property (retain, nonatomic) NSMutableDictionary *questionTypeImportanceByQuestionType;

- (void).cxx_destruct;
- (void)_handleKVSQuestionsUpdateIfNeededWithProgressBlock:(id /* block */)a0;
- (void)_handleQuestionVersionBumpIfNeededWithProgressBlock:(id /* block */)a0;
- (void)_syncAnsweredQuestionsWithProgressBlock:(id /* block */)a0;
- (void)_updateInvalidQuestionsWithProgressBlock:(id /* block */)a0;
- (id)allQuestionFactories;
- (void)assignScoreToQuestions:(id)a0;
- (id)currentQuestionsKVSData;
- (char)generateQuestionsWithOptions:(long long)a0 limit:(unsigned long long)a1 handleQuestionVersionBump:(char)a2 updateInvalidQuestions:(char)a3 progress:(id /* block */)a4;
- (char)generateQuestionsWithOptions:(long long)a0 progress:(id /* block */)a1;
- (double)importanceOfQuestionType:(id)a0;
- (id)initWithGraphManager:(id)a0;
- (char)persistQuestions:(id)a0;
- (id)questionFactoriesForOptions:(long long)a0;
- (void)removeCurrentKVSData;
- (id)selectedQuestionsFromSortedQuestionsByQuestionType:(id)a0 withLimit:(unsigned long long)a1;

@end
