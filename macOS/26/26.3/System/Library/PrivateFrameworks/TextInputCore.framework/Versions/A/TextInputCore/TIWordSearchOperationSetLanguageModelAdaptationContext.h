@class TIMecabraWrapper, TILanguageModelAdaptationContext;

@interface TIWordSearchOperationSetLanguageModelAdaptationContext : TIWordSearchOperation

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;
@property (copy, nonatomic) TILanguageModelAdaptationContext *adaptationContext;

- (void)cancel;
- (void).cxx_destruct;
- (void)perform;
- (id)initWithWordSearch:(id)a0 adaptationContext:(id)a1;

@end
