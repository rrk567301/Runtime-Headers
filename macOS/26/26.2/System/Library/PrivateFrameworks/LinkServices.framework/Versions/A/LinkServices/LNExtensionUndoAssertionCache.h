@interface LNExtensionUndoAssertionCache : NSObject {
    void /* unknown type, empty encoding */ assertions;
}

@property (class, nonatomic, readonly) LNExtensionUndoAssertionCache *shared;

- (void)removeAssertion:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)addAssertion:(id)a0 error:(id *)a1;
- (BOOL)extendAssertionForHandle:(id)a0;

@end
