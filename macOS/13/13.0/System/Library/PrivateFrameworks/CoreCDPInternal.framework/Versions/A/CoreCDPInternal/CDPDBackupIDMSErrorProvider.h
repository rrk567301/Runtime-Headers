@interface CDPDBackupIDMSErrorProvider : CDPDBackupErrorProviderImpl

- (BOOL)supportsErrorPresentation;
- (id)cooldownErrorWithUnderlyingError:(id)a0;
- (id)globalHardLimitError;
- (id)globalHardLimitErrorWithRecord:(id)a0;
- (id)hardLimitErrorForRecord:(id)a0;
- (id)recordNotFoundErrorWithUnderlyingError:(id)a0;
- (void)handleHardLimitError:(id)a0 completion:(id /* block */)a1;
- (void)handleSoftLimitError:(id)a0 completion:(id /* block */)a1;

@end
