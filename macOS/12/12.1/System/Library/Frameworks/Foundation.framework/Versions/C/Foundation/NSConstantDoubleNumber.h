@interface NSConstantDoubleNumber : NSNumber {
    double _value;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (double)doubleValue;
- (long long)longLongValue;
- (unsigned long long)unsignedLongLongValue;
- (const char *)objCType;
- (char)charValue;
- (unsigned char)unsignedCharValue;
- (short)shortValue;
- (unsigned short)unsignedShortValue;
- (int)intValue;
- (unsigned int)unsignedIntValue;
- (long long)longValue;
- (unsigned long long)unsignedLongValue;
- (float)floatValue;
- (BOOL)boolValue;
- (void)getValue:(void *)a0;
- (long long)integerValue;
- (unsigned long long)unsignedIntegerValue;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;

@end
