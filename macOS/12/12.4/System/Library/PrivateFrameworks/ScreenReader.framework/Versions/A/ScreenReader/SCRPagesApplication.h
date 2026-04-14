@interface SCRPagesApplication : SCRiWorkApplication

- (id)focusedUIElement;
- (BOOL)shouldListenForValueChanges;
- (void)_valueDidChange:(id)a0;
- (void)_textSelectionDidChange:(id)a0;
- (unsigned long long)majorVersionNumberForiWorkApplicationVersion:(long long)a0;
- (BOOL)isPagesApplication;

@end
