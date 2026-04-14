@interface _SFXPCAsyncIterator : NSObject <Sharing._SFXPCAsyncIteratorProtocol> {
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ iterator;
    void /* unknown type, empty encoding */ containerRegistry;
    void /* unknown type, empty encoding */ currentTask;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)xpcCancel;
- (void)xpcNextWithCompletion:(id /* block */)a0;

@end
