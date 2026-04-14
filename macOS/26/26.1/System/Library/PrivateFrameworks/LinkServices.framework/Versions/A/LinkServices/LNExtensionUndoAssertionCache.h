@interface LNExtensionUndoAssertionCache : NSObject {
    void /* unknown type, empty encoding */ assertions;
}

@property (class, nonatomic, readonly) LNExtensionUndoAssertionCache *shared;

- (void).cxx_destruct;
- (void)removeAssertion:(id)a0;
- (id)init;
- (BOOL)addAssertion:(id)a0 error:(id *)a1;
- (BOOL)extendAssertionForHandle:(id)a0;

@end
