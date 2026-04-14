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

- (id)initWithInt64:(long long)a0 sqlType:(unsigned char)a1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)a0;
- (void)setValue:(id)a0;
- (void)setSQLType:(unsigned char)a0;
- (void)setUnsignedInt:(unsigned int)a0;
- (BOOL)hasObjectValue;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2;
- (unsigned char)sqlType;
- (id)value;
- (BOOL)allowsCoercion;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2 allowCoercion:(BOOL)a3;
- (id)initWithUnsignedInt:(unsigned int)a0 sqlType:(unsigned char)a1;
- (void)dealloc;
- (unsigned int)unsignedInt;
- (void)setInt64:(long long)a0;
- (long long)int64;
- (id)tombstonedPropertyDescription;
- (id)propertyDescription;
- (void)setTombstonedPropertyDescription:(id)a0;

@end
