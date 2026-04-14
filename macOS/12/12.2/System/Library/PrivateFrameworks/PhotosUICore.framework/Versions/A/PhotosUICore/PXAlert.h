@class NSMutableArray;

@interface PXAlert : NSAlert {
    NSMutableArray *_completionHandlers;
}

- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (id)addButtonWithTitle:(id)a0;
- (id)addButtonWithTitle:(id)a0 completionHandler:(id /* block */)a1;

@end
