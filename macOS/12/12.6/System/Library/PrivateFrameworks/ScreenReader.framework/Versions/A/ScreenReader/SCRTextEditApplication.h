@interface SCRTextEditApplication : SCRApplication

- (BOOL)shouldListenForValueChanges;
- (void)_valueDidChange:(id)a0;
- (void)_textSelectionDidChange:(id)a0;

@end
