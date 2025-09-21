@class DirectoryEditorViewController, NSTabView;

@interface DirEditorPlugin : NSObject {
    NSTabView *_mainTabView;
}

@property DirectoryEditorViewController *dirEditorViewController;

+ (char)recordTypeSupported:(id)a0;

- (void)dealloc;
- (id)initWithDocument:(id)a0;
- (void)loadTabWithIdentifier:(id)a0 forRecords:(id)a1 ofType:(id)a2 isNewRecord:(char)a3 isEditable:(char)a4;
- (id)attrsNeededDuringSearch;
- (id)doPostSaveOperations;
- (id)mainTabView;
- (id)newRecordLongNameFormat;
- (id)newRecordNameFormat;
- (id)recordsAfterEditing;
- (char)shouldShowRecord:(id)a0;
- (char)tabWithIdentifierCanEdit:(id)a0;

@end
