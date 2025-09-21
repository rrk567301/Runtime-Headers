@class TIMecabraWrapper;

@interface TIWordSearchOperationAcceptCandidate : TIWordSearchOperation {
    void *_mecabraCandidate;
}

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;
@property (nonatomic, getter=isPartialCandidate) char partialCandidate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)perform;
- (id)initWithWordSearch:(id)a0 mecabraCandidate:(void *)a1 isPartial:(char)a2;

@end
