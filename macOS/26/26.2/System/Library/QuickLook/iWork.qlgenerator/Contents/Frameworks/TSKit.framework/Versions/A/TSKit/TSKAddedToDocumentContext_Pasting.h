@class NSMutableArray;

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {
    NSMutableArray *mAddedDrawables;
}

- (void).cxx_destruct;
- (id)description;
- (void)addDrawable:(id)a0;
- (BOOL)autoUpdateSmartFields;
- (BOOL)syncChanges;
- (BOOL)wasPasted;
- (void)addDrawables:(id)a0;
- (id)addedDrawables;
- (BOOL)uniqueSmartFields;

@end
