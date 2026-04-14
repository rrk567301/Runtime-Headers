@class NSString;

@interface AKAccountRecoveryStepSMSVerificationCode : NSObject <AKAccountRecoveryStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isSMSVerificationErrorForData:(id)a0;
- (void)_beginSMSCodeVerificationWithResponse:(id)a0 model:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isValidSMSCodeFormat:(id)a0;
- (id)_promptForSMSCode;
- (void)_verifySMSCodeWithData:(id)a0 model:(id)a1 response:(id)a2 completion:(id /* block */)a3;
- (BOOL)canProcessResponse:(id)a0;
- (void)processResponse:(id)a0 model:(id)a1 withCompletion:(id /* block */)a2;

@end
