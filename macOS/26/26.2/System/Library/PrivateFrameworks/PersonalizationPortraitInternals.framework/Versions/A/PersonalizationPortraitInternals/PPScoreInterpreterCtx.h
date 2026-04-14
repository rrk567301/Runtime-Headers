@class PPScoreDict;

@interface PPScoreInterpreterCtx : NSObject {
    struct unique_ptr<std::vector<PPScoreInterpreterValue>, std::default_delete<std::vector<PPScoreInterpreterValue>>> { struct { void *__ptr_; } ; } _stack;
    PPScoreDict *_scoreInputs;
    PPScoreDict *_previousSubscores;
    PPScoreDict *_subscores;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
