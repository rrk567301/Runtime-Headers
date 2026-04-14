@interface VectorSearch.VSKColumnTypeWrapper : NSObject {
    void /* unknown type, empty encoding */ wrappedValue;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIntegerDefaultValue:(id)a0;
- (id)initWithStringDefaultValue:(id)a0;
- (id)initWithDoubleDefaultValue:(id)a0;

@end
