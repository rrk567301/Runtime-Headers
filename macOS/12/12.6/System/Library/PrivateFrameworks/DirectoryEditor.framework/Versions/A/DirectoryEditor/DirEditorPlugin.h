@class DirectoryEditorViewController, NSTabView;

@interface DirEditorPlugin : NSObject {
    NSTabView *_mainTabView;
}

@property DirectoryEditorViewController *dirEditorViewController;

+ (BOOL)recordTypeSupported:(id)a0;

- (void)dealloc;
- (id)initWithDocument:(id)a0;
- (id)recordsAfterEditing;
- (id)doPostSaveOperations;
- (BOOL)shouldShowRecord:(id)a0;
- (id)attrsNeededDuringSearch;
- (id)mainTabView;
- (void)loadTabWithIdentifier:(id)a0 forRecords:(id)a1 ofType:(id)a2 isNewRecord:(BOOL)a3 isEditable:(BOOL)a4;
- (BOOL)tabWithIdentifierCanEdit:(id)a0;
- (id)newRecordNameFormat;
- (id)newRecordLongNameFormat;

@end
