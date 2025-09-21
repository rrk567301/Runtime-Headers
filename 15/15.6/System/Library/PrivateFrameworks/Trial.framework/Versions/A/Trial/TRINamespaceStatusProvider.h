@protocol TRIPaths;

@interface TRINamespaceStatusProvider : NSObject {
    id<TRIPaths> _paths;
}

- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (char)deleteStatusForNamespaceWithName:(id)a0;
- (id)loadNamespaceStatusFromURL:(id)a0;
- (char)saveNamespaceStatus:(id)a0 toURL:(id)a1;
- (char)saveStatus:(id)a0;
- (id)statusForNamespaceWithName:(id)a0;
- (char)updateStatusForNamespaceWithName:(id)a0 usingBlock:(id /* block */)a1;
- (id)urlForStatusWithNamespaceName:(id)a0;

@end
