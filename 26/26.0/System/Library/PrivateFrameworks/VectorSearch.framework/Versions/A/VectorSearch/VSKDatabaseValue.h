@class _TtC12VectorSearch23VSKDatabaseValueWrapper;

@interface VSKDatabaseValue : NSObject <NSCopying> {
    _TtC12VectorSearch23VSKDatabaseValueWrapper *wrapper;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)getStringValue;
- (id)initWithStringValue:(id)a0;
- (id)getDataValue;
- (id)initWithIntegerValue:(id)a0;
- (id)initWithDoubleValue:(id)a0;
- (id)getDoubleValue;
- (id)_getWrapper;
- (id)getIntValue;
- (id)initWithDataValue:(id)a0;
- (id)initWithNullValue;
- (id)initWithTokenizedStringValues:(id)a0;

@end
