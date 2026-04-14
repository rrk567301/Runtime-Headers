@class NSString;

@interface AKAccountRecoveryStepChangePassword : NSObject <AKAccountRecoveryStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_promptForNewPasswordWithModel:(id)a0;
- (id)_matchingAttributeWithResponse:(id)a0;
- (void)_beginChangePasswordWithResponse:(id)a0 model:(id)a1 completion:(id /* block */)a2;
- (id)_findConfirmRowIDForNewPasswordRowID:(id)a0 editableTextRows:(id)a1;
- (id)_getPasswordFieldMappingFromResponse:(id)a0 editableTextRows:(id)a1;
- (BOOL)_isAuthenticationFailureForData:(id)a0;
- (BOOL)_isConfirmationField:(id)a0;
- (BOOL)_isIncorrectCurrentPasswordErrorForData:(id)a0;
- (BOOL)_isNewPasswordErrorForData:(id)a0;
- (id)_promptForConfirmPasswordWithModel:(id)a0;
- (id)_tryClientInfoMappingFromResponse:(id)a0 editableTextRows:(id)a1;
- (id)_tryPositionalMappingFromEditableTextRows:(id)a0;
- (void)_verifyNewPasswordWithRowID:(id)a0 confirmRowID:(id)a1 model:(id)a2 completion:(id /* block */)a3;
- (BOOL)canProcessResponse:(id)a0;
- (void)processResponse:(id)a0 model:(id)a1 withCompletion:(id /* block */)a2;

@end
