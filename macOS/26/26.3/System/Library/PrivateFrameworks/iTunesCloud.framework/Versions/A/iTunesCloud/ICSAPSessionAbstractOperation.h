@class ICSAPSession;

@interface ICSAPSessionAbstractOperation : ICAsyncOperation

@property (retain, nonatomic) ICSAPSession *sapSession;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)executeWithSAPContext:(id)a0;
- (void)execute;
- (void)finishWithSAPContextPreparationError:(id)a0;

@end
