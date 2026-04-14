@interface SNFileSystem : NSObject {
    void /* unknown type, empty encoding */ inflightTasks;
    void /* unknown type, empty encoding */ queue;
}

- (void).cxx_destruct;
- (void)removeRequest:(id)a0;
- (id)init;
- (void)addRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2;

@end
