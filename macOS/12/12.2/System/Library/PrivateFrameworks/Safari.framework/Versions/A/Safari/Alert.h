@interface Alert : NSAlert {
    id /* block */ _completionHandler;
}

- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;
- (void)showAlertWithCompletionHandler:(id /* block */)a0;

@end
