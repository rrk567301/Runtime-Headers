@interface NSCoreDataCodableAdapterRegistry : NSObject {
    void /* unknown type, empty encoding */ _lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)decodeWithData:(id)a0 withAdapterNamed:(id)a1 error:(id *)a2;
- (id)encodeWithValue:(id)a0 withAdapterNamed:(id)a1 error:(id *)a2;

@end
