@class NSMutableArray;

@interface TSKAddedToDocumentContext : NSObject {
    NSMutableArray *mInsertedTableInfos;
}

+ (id)defaultContext;
+ (id)movingContext;
+ (id)unarchivingContext;
+ (id)importingContextWithImporterID:(id)a0;
+ (id)pastingContext;
+ (id)pastingMatchStyleContext;
+ (id)dragMoveContext;
+ (id)dragCopyContext;
+ (id)insertingPrototypeContext;
+ (id)unhidingContext;
+ (id)undoDeleteContext;
+ (id)exportFootnoteContext;
+ (id)moveSectionContext;
+ (id)exportMergedHeaderContext;
+ (id)preserveParentStorageContext;
+ (id)migrateStylesContext;
+ (id)textBoxLinkageContext;

- (void).cxx_destruct;
- (void)addDrawable:(id)a0;
- (BOOL)wasUnarchived;
- (BOOL)autoUpdateSmartFields;
- (id)importerID;
- (BOOL)wasPasted;
- (BOOL)syncChanges;
- (BOOL)matchStyle;
- (BOOL)wasDragOperation;
- (BOOL)wasDragMoved;
- (BOOL)wasMoved;
- (id)undoContext;
- (BOOL)wasUnhidden;
- (BOOL)wasUndoDelete;
- (BOOL)wasImported;
- (BOOL)invokeDOLC;
- (BOOL)wasMigratingStyles;
- (id)insertedTableInfos;
- (void)addDrawables:(id)a0;
- (id)addedDrawables;
- (BOOL)uniqueSmartFields;
- (BOOL)preserveChangeTracking;
- (BOOL)preserveParentStorage;
- (void)addInsertedTableInfo:(id)a0;

@end
