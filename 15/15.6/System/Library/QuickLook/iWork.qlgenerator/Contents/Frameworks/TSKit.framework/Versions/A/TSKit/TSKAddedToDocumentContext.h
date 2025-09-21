@class NSMutableArray;

@interface TSKAddedToDocumentContext : NSObject {
    NSMutableArray *mInsertedTableInfos;
}

+ (id)defaultContext;
+ (id)importingContextWithImporterID:(id)a0;
+ (id)unhidingContext;
+ (id)dragCopyContext;
+ (id)dragMoveContext;
+ (id)exportFootnoteContext;
+ (id)insertingPrototypeContext;
+ (id)movingContext;
+ (id)pastingContext;
+ (id)pastingMatchStyleContext;
+ (id)unarchivingContext;
+ (id)undoDeleteContext;
+ (id)cloningContext;
+ (id)exportMergedHeaderContext;
+ (id)migrateStylesContext;
+ (id)moveSectionContext;
+ (id)preserveParentStorageContext;
+ (id)textBoxLinkageContext;

- (void).cxx_destruct;
- (void)addDrawable:(id)a0;
- (char)wasMoved;
- (id)undoContext;
- (char)autoUpdateSmartFields;
- (id)importerID;
- (char)invokeDOLC;
- (char)matchStyle;
- (char)syncChanges;
- (char)wasDragMoved;
- (char)wasDragOperation;
- (char)wasImported;
- (char)wasPasted;
- (char)wasUnarchived;
- (char)wasUndoDelete;
- (char)wasUnhidden;
- (id)insertedTableInfos;
- (char)wasMigratingStyles;
- (void)addDrawables:(id)a0;
- (void)addInsertedTableInfo:(id)a0;
- (id)addedDrawables;
- (char)preserveChangeTracking;
- (char)preserveParentStorage;
- (char)uniqueSmartFields;

@end
