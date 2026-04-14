@class NSSet;

@interface MFEWSPruneFolderHierarchyTaskOperation : MFEWSPersistenceTaskOperation

@property (nonatomic) BOOL prunedSuccessfully;
@property (readonly, copy, nonatomic) NSSet *foundFolderIdStrings;

- (void)main;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFoundFolderIdStrings:(id)a0;

@end
