@interface NSConstantDoubleNumber : NSNumber {
    double _value;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (const char *)objCType;
- (long long)integerValue;
- (BOOL)boolValue;
- (id)copy;
- (double)doubleValue;
- (id)retain;
- (short)shortValue;
- (int)intValue;
- (oneway void)release;
- (char)charValue;
- (unsigned long long)retainCount;
- (void)getValue:(void *)a0;
- (unsigned long long)unsignedLongValue;
- (long long)longValue;
- (long long)longLongValue;
- (unsigned long long)unsignedIntegerValue;
- (BOOL)_tryRetain;
- (unsigned int)unsignedIntValue;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (void)dealloc;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (BOOL)_isDeallocating;
- (unsigned long long)unsignedLongLongValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (float)floatValue;
- (unsigned short)unsignedShortValue;
- (unsigned char)unsignedCharValue;
- (id)init;

@end
