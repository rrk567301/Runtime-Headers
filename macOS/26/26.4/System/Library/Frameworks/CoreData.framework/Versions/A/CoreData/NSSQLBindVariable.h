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

- (unsigned char)sqlType;
- (id)propertyDescription;
- (void)setIndex:(unsigned int)a0;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2;
- (void)setSQLType:(unsigned char)a0;
- (unsigned int)index;
- (void)setInt64:(long long)a0;
- (BOOL)allowsCoercion;
- (void)setUnsignedInt:(unsigned int)a0;
- (long long)int64;
- (unsigned int)unsignedInt;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2 allowCoercion:(BOOL)a3;
- (id)value;
- (id)initWithInt64:(long long)a0 sqlType:(unsigned char)a1;
- (id)initWithUnsignedInt:(unsigned int)a0 sqlType:(unsigned char)a1;
- (void)setTombstonedPropertyDescription:(id)a0;
- (id)tombstonedPropertyDescription;
- (BOOL)hasObjectValue;
- (void)setValue:(id)a0;
- (void)dealloc;

@end
