@class TIMecabraWrapper;

@interface TIWordSearchOperationCancelLastAcceptedCandidate : TIWordSearchOperation

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;

- (void)cancel;
- (void)perform;
- (void).cxx_destruct;
- (id)initWithWordSearch:(id)a0;

@end
