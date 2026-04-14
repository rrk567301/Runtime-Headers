@interface VectorSearch.VSKDatabaseValueWrapper : NSObject {
    void /* unknown type, empty encoding */ wrappedValue;
}

- (id)init;
- (void).cxx_destruct;
- (id)getStringValue;
- (id)initWithStringValue:(id)a0;
- (id)getDataValue;
- (id)initWithIntegerValue:(id)a0;
- (id)initWithDoubleValue:(id)a0;
- (id)getDoubleValue;
- (id)getIntValue;
- (id)initWithDataValue:(id)a0;
- (id)initWithTokenizedStringValues:(id)a0;

@end
