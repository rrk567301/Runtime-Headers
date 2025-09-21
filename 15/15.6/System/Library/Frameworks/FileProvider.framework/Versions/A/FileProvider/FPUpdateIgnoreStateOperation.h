@class NSArray;

@interface FPUpdateIgnoreStateOperation : FPActionOperation {
    NSArray *_items;
    char _ignoreState;
}

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)actionMain;
- (id)initWithItems:(id)a0 ignoreState:(char)a1 action:(id)a2;
- (void)presendNotifications;
- (id)replicateForItems:(id)a0;

@end
