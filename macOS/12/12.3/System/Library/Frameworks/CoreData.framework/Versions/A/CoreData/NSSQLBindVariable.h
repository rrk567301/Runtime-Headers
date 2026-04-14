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

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)value;
- (unsigned int)index;
- (void)setIndex:(unsigned int)a0;
- (void)setValue:(id)a0;
- (unsigned char)sqlType;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2;
- (id)propertyDescription;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2 allowCoercion:(BOOL)a3;
- (void)setInt64:(long long)a0;
- (void)setUnsignedInt:(unsigned int)a0;
- (id)initWithInt64:(long long)a0 sqlType:(unsigned char)a1;
- (id)initWithUnsignedInt:(unsigned int)a0 sqlType:(unsigned char)a1;
- (long long)int64;
- (unsigned int)unsignedInt;
- (void)setSQLType:(unsigned char)a0;
- (BOOL)hasObjectValue;
- (BOOL)allowsCoercion;
- (void)setTombstonedPropertyDescription:(id)a0;
- (id)tombstonedPropertyDescription;

@end
