@interface NSConstantDoubleNumber : NSNumber {
    double _value;
}

+ (id)new;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)getValue:(void *)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (unsigned int)unsignedIntValue;
- (BOOL)_tryRetain;
- (const char *)objCType;
- (unsigned long long)unsignedIntegerValue;
- (id)autorelease;
- (char)charValue;
- (long long)longLongValue;
- (double)doubleValue;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)integerValue;
- (short)shortValue;
- (BOOL)_isDeallocating;
- (int)intValue;
- (long long)longValue;
- (unsigned long long)unsignedLongLongValue;
- (BOOL)boolValue;
- (unsigned long long)unsignedLongValue;
- (unsigned char)unsignedCharValue;
- (id)copy;
- (float)floatValue;
- (unsigned short)unsignedShortValue;
- (id)retain;
- (id)init;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
