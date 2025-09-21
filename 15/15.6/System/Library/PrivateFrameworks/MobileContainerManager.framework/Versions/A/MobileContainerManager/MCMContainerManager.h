@interface MCMContainerManager : NSObject

+ (id)defaultManager;

- (id)init;
- (id)containersWithClass:(long long)a0 error:(id *)a1;
- (id)_containersWithClass:(long long)a0 temporary:(char)a1 error:(id *)a2;
- (id)containerWithContentClass:(long long)a0 identifier:(id)a1 createIfNecessary:(char)a2 existed:(char *)a3 error:(id *)a4;
- (id)containerWithContentClass:(long long)a0 identifier:(id)a1 error:(id *)a2;
- (id)deleteContainers:(id)a0 withCompletion:(id /* block */)a1;
- (char)replaceContainer:(id)a0 withContainer:(id)a1 error:(id *)a2;
- (char)replaceContainer:(id)a0 withContainer:(id)a1 error:(id *)a2 withCompletion:(id /* block */)a3;
- (id)temporaryContainerWithContentClass:(long long)a0 identifier:(id)a1 existed:(char *)a2 error:(id *)a3;
- (id)temporaryContainersWithClass:(long long)a0 error:(id *)a1;

@end
