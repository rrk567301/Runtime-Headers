@class NSSet;

@interface MFEWSPruneFolderHierarchyTaskOperation : MFEWSPersistenceTaskOperation

@property (nonatomic) char prunedSuccessfully;
@property (readonly, copy, nonatomic) NSSet *foundFolderIdStrings;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithFoundFolderIdStrings:(id)a0;

@end
