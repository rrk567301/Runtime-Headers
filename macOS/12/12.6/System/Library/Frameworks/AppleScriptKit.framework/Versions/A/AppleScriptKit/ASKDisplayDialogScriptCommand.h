@class ASKDisplayDialog;

@interface ASKDisplayDialogScriptCommand : ASKScriptCommand {
    ASKDisplayDialog *_displayDialog;
}

- (void)dealloc;
- (void)setReceiversSpecifier:(id)a0;
- (id)performDefaultImplementation;
- (id)initWithCommandDescription:(id)a0;
- (void)setDirectParameter:(id)a0;
- (void)sheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (id)displayDialog;

@end
