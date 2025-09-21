@class TIMecabraEnvironment;

@interface TIWordSearchOperationContextAcceptCandidate : TIWordSearchOperation {
    void *_mecabraCandidate;
}

@property (retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment;
@property (nonatomic, getter=isPartialCandidate) char partialCandidate;
@property (nonatomic, getter=isPrediction) char prediction;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)perform;
- (id)initWithWordSearch:(id)a0 mecabraCandidate:(void *)a1 isPartial:(char)a2 isPrediction:(char)a3;

@end
