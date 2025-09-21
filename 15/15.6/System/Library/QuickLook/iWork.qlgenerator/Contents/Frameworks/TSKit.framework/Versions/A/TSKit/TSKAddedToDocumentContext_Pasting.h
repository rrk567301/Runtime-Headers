@class NSMutableArray;

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {
    NSMutableArray *mAddedDrawables;
}

- (id)description;
- (void).cxx_destruct;
- (void)addDrawable:(id)a0;
- (char)autoUpdateSmartFields;
- (char)syncChanges;
- (char)wasPasted;
- (void)addDrawables:(id)a0;
- (id)addedDrawables;
- (char)uniqueSmartFields;

@end
