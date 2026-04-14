@interface ASKDisplayAlertScriptCommand : ASKScriptCommand

- (void)setReceiversSpecifier:(id)a0;
- (id)performDefaultImplementation;
- (id)initWithCommandDescription:(id)a0;
- (void)setDirectParameter:(id)a0;
- (void)sheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (id)_titleOfButtonForReturnCode:(long long)a0;

@end
