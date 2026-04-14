@interface LSBundleWrapperCreator : NSObject <LSBundleWrapperMutation> {
    struct unique_ptr<LaunchServices::BundleWrapperMutationOperation, std::default_delete<LaunchServices::BundleWrapperMutationOperation>> { struct BundleWrapperMutationOperation *__ptr_; } _creationOperation;
}

- (id)finalizeWithError:(id *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initForTargetDirectoryURL:(id)a0 consultingPlaceholderAtURL:(id)a1;
- (id)initForTargetDirectoryURL:(id)a0 desiredFilesystemName:(id)a1;
- (id)initTargetingFinalURL:(id)a0;
- (id)writeContainerContents:(id /* block */)a0;

@end
