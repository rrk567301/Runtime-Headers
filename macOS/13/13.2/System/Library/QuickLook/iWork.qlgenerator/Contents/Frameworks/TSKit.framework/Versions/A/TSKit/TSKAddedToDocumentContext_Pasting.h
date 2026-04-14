@class NSMutableArray;

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {
    NSMutableArray *mAddedDrawables;
}

- (id)description;
- (void).cxx_destruct;
- (void)addDrawable:(id)a0;
- (BOOL)autoUpdateSmartFields;
- (BOOL)wasPasted;
- (BOOL)syncChanges;
- (void)addDrawables:(id)a0;
- (id)addedDrawables;
- (BOOL)uniqueSmartFields;

@end
