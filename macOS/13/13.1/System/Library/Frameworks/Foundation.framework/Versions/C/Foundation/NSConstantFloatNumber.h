@interface NSConstantFloatNumber : NSNumber {
    float _value;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (id)copy;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned char)unsignedCharValue;
- (unsigned short)unsignedShortValue;
- (double)doubleValue;
- (short)shortValue;
- (int)intValue;
- (unsigned int)unsignedIntValue;
- (long long)longLongValue;
- (char)charValue;
- (const char *)objCType;
- (unsigned long long)unsignedLongValue;
- (unsigned long long)unsignedLongLongValue;
- (float)floatValue;
- (long long)longValue;
- (void)getValue:(void *)a0;
- (long long)integerValue;
- (unsigned long long)unsignedIntegerValue;
- (BOOL)boolValue;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;

@end
