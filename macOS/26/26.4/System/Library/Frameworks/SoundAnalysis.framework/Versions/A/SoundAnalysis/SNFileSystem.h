@interface SNFileSystem : NSObject {
    void /* unknown type, empty encoding */ inflightTasks;
    void /* unknown type, empty encoding */ queue;
}

- (void)removeRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2;

@end
