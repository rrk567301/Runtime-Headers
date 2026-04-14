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

- (void)setIndex:(unsigned int)a0;
- (id)propertyDescription;
- (void)setUnsignedInt:(unsigned int)a0;
- (void)setTombstonedPropertyDescription:(id)a0;
- (id)initWithInt64:(long long)a0 sqlType:(unsigned char)a1;
- (unsigned char)sqlType;
- (id)tombstonedPropertyDescription;
- (unsigned int)index;
- (BOOL)hasObjectValue;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2 allowCoercion:(BOOL)a3;
- (void)setSQLType:(unsigned char)a0;
- (unsigned int)unsignedInt;
- (BOOL)allowsCoercion;
- (void)dealloc;
- (id)initWithUnsignedInt:(unsigned int)a0 sqlType:(unsigned char)a1;
- (void)setValue:(id)a0;
- (void)setInt64:(long long)a0;
- (id)value;
- (long long)int64;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2;

@end
