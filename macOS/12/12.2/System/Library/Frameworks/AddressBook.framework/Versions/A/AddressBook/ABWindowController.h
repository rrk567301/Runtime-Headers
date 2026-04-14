@interface ABWindowController : NSWindowController {
    id /* block */ _completionHandler;
}

- (void).cxx_destruct;
- (void)abSheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)abBeginSheetForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)abEndSheet:(id)a0;

@end
