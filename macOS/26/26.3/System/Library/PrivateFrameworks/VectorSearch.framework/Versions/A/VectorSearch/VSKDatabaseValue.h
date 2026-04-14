@class _TtC12VectorSearch23VSKDatabaseValueWrapper;

@interface VSKDatabaseValue : NSObject <NSCopying> {
    _TtC12VectorSearch23VSKDatabaseValueWrapper *wrapper;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getStringValue;
- (id)initWithStringValue:(id)a0;
- (id)getDataValue;
- (id)initWithIntegerValue:(id)a0;
- (id)initWithDoubleValue:(id)a0;
- (id)getIntValue;
- (id)getDoubleValue;
- (id)_getWrapper;
- (id)initWithDataValue:(id)a0;
- (id)initWithNullValue;
- (id)initWithTokenizedStringValues:(id)a0;

@end
