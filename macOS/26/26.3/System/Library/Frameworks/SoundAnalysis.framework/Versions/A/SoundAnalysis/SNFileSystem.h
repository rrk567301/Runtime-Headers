@interface SNFileSystem : NSObject {
    void /* unknown type, empty encoding */ inflightTasks;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void)removeRequest:(id)a0;
- (void).cxx_destruct;
- (void)addRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2;

@end
