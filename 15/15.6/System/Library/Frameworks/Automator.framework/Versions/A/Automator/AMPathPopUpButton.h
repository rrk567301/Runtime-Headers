@class NSString, NSArray;

@interface AMPathPopUpButton : _AMVariablePopUpButton <NSOpenSavePanelDelegate> {
    id _future;
    id _future2;
    id _future3;
    id _future4;
}

@property (copy, nonatomic) NSString *path;
@property (nonatomic) char canChooseNewPaths;
@property (nonatomic) char canChooseExistingPaths;
@property (nonatomic) char canChooseDirectories;
@property (nonatomic) char canChooseFiles;
@property (nonatomic) char showStandardPaths;
@property (nonatomic) char showPathComponents;
@property (nonatomic) char displayPanelAsSheet;
@property (nonatomic) char canChooseApplications;
@property (nonatomic) char showPlaceholder;
@property (nonatomic) char shouldUpdateItems;
@property (copy, nonatomic) NSString *placeholder;
@property (readonly, copy, nonatomic) NSString *expandedPath;
@property (retain, nonatomic) NSArray *customPaths;
@property (retain, nonatomic) NSArray *allowedFileTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pullsDown:(char)a1;
- (void)setTitle:(id)a0;
- (void)setObjectValue:(id)a0;
- (id)objectValue;
- (id)title;
- (void)_updateItems;
- (void)concludeDragOperation:(id)a0;
- (char)inTesting;
- (char)_allowDrag:(id)a0;
- (id)_imageAtPath:(id)a0;
- (long long)_indexOfItemWithPath:(id)a0;
- (void)_pathChosen:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)_setupItems;
- (void)chooseItem:(id)a0;
- (void)chooseNewPath:(id)a0;
- (void)choosePath:(id)a0;
- (void)choosePlaceholder:(id)a0;
- (id)defaultNewVariable;
- (char)hasTesting;
- (void)removeVariableWithUUID:(id)a0;

@end
