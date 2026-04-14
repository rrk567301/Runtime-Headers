@interface NSConstantIntegerNumber : NSNumber {
    const char *_encoding;
    long long _value;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (float)floatValue;
- (unsigned short)unsignedShortValue;
- (long long)longLongValue;
- (short)shortValue;
- (unsigned long long)unsignedIntegerValue;
- (unsigned int)unsignedIntValue;
- (int)intValue;
- (char)charValue;
- (void)getValue:(void *)a0;
- (const char *)objCType;
- (long long)integerValue;
- (id)retain;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)retainCount;
- (unsigned long long)unsignedLongLongValue;
- (id)autorelease;
- (BOOL)boolValue;
- (id)copy;
- (double)doubleValue;
- (unsigned long long)unsignedLongValue;
- (long long)longValue;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (oneway void)release;
- (unsigned char)unsignedCharValue;
- (id)init;
- (void)dealloc;

@end
