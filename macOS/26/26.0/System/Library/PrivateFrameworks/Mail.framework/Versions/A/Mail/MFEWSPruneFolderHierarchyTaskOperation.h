@class NSSet;

@interface MFEWSPruneFolderHierarchyTaskOperation : MFEWSPersistenceTaskOperation

@property (nonatomic) BOOL prunedSuccessfully;
@property (readonly, copy, nonatomic) NSSet *foundFolderIdStrings;

- (void)main;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFoundFolderIdStrings:(id)a0;

@end
