@interface NSConstantFloatNumber : NSNumber {
    float _value;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (long long)integerValue;
- (const char *)objCType;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (unsigned short)unsignedShortValue;
- (void)getValue:(void *)a0;
- (float)floatValue;
- (BOOL)boolValue;
- (void)dealloc;
- (short)shortValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_tryRetain;
- (id)copy;
- (id)retain;
- (id)init;
- (double)doubleValue;
- (long long)longLongValue;
- (unsigned long long)unsignedIntegerValue;
- (unsigned long long)retainCount;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (unsigned char)unsignedCharValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned int)unsignedIntValue;
- (char)charValue;
- (oneway void)release;
- (unsigned long long)unsignedLongValue;
- (int)intValue;
- (long long)longValue;

@end
