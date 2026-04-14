@interface SCRPagesApplication : SCRiWorkApplication

- (void)_valueDidChange:(id)a0;
- (void)_textSelectionDidChange:(id)a0;
- (BOOL)shouldListenForValueChanges;
- (id)focusedUIElement;
- (unsigned long long)majorVersionNumberForiWorkApplicationVersion:(long long)a0;
- (BOOL)isPagesApplication;

@end
