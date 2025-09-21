@interface AMSCodableResponseDecoder : NSObject <AMSResponseDecoding> {
    void /* unknown type, empty encoding */ rootClass;
}

- (id)resultFromResult:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithRootClass:(Class)a0;

@end
