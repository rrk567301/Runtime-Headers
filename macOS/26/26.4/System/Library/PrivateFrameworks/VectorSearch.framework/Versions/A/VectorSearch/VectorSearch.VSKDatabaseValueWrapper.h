@interface VectorSearch.VSKDatabaseValueWrapper : NSObject {
    void /* unknown type, empty encoding */ wrappedValue;
}

- (void).cxx_destruct;
- (id)init;
- (id)getStringValue;
- (id)initWithStringValue:(id)a0;
- (id)getDataValue;
- (id)initWithIntegerValue:(id)a0;
- (id)initWithDoubleValue:(id)a0;
- (id)getIntValue;
- (id)getDoubleValue;
- (id)initWithDataValue:(id)a0;
- (id)initWithTokenizedStringValues:(id)a0;

@end
