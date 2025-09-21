@class NSPropertyDescription;

@interface NSSQLBindVariable : NSObject {
    int _cd_rc;
    unsigned char _sqlType;
    unsigned int _index;
    unsigned int _flags;
    id _value;
    NSPropertyDescription *_propertyDescription;
    NSPropertyDescription *_tombstonedPropertyDescription;
    long long _int64;
}

- (id)propertyDescription;
- (void)setIndex:(unsigned int)a0;
- (unsigned int)index;
- (unsigned char)sqlType;
- (id)initWithUnsignedInt:(unsigned int)a0 sqlType:(unsigned char)a1;
- (void)setValue:(id)a0;
- (id)value;
- (void)dealloc;
- (id)initWithInt64:(long long)a0 sqlType:(unsigned char)a1;
- (void)setUnsignedInt:(unsigned int)a0;
- (BOOL)hasObjectValue;
- (id)tombstonedPropertyDescription;
- (unsigned int)unsignedInt;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2;
- (BOOL)allowsCoercion;
- (long long)int64;
- (void)setInt64:(long long)a0;
- (void)setTombstonedPropertyDescription:(id)a0;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2 allowCoercion:(BOOL)a3;
- (void)setSQLType:(unsigned char)a0;

@end
