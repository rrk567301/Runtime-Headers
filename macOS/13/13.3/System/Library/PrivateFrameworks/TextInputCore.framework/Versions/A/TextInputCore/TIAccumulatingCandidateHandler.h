@class TIAutocorrectionList;

@interface TIAccumulatingCandidateHandler : NSObject <TICandidateHandler> {
    unsigned long long _status;
}

@property (retain, nonatomic) TIAutocorrectionList *candidates;
@property (readonly, copy, nonatomic) id /* block */ candidateHandler;
@property (readonly, nonatomic) BOOL asynchronous;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)open;
- (void)pushCandidates:(id)a0;
- (id)initWithHandlerBlock:(id /* block */)a0;

@end
