@interface _SFXPCAsyncIterator : NSObject <Sharing._SFXPCAsyncIteratorProtocol> {
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ iterator;
    void /* unknown type, empty encoding */ containerRegistry;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)xpcNextWithCompletion:(id /* block */)a0;

@end
