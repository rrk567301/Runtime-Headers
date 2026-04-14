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

- (unsigned int)index;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2;
- (void)setTombstonedPropertyDescription:(id)a0;
- (id)propertyDescription;
- (id)initWithUnsignedInt:(unsigned int)a0 sqlType:(unsigned char)a1;
- (id)initWithInt64:(long long)a0 sqlType:(unsigned char)a1;
- (unsigned char)sqlType;
- (id)tombstonedPropertyDescription;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2 allowCoercion:(BOOL)a3;
- (BOOL)allowsCoercion;
- (void)setValue:(id)a0;
- (id)value;
- (unsigned int)unsignedInt;
- (void)setUnsignedInt:(unsigned int)a0;
- (void)setSQLType:(unsigned char)a0;
- (BOOL)hasObjectValue;
- (void)setIndex:(unsigned int)a0;
- (long long)int64;
- (void)setInt64:(long long)a0;
- (void)dealloc;

@end
