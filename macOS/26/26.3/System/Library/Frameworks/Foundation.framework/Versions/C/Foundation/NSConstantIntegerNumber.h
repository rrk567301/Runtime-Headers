@interface NSConstantIntegerNumber : NSNumber {
    const char *_encoding;
    long long _value;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (long long)longLongValue;
- (unsigned char)unsignedCharValue;
- (id)copy;
- (float)floatValue;
- (void)getValue:(void *)a0;
- (const char *)objCType;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (int)intValue;
- (unsigned long long)retainCount;
- (char)charValue;
- (id)autorelease;
- (unsigned long long)unsignedLongLongValue;
- (id)retain;
- (unsigned long long)unsignedIntegerValue;
- (long long)integerValue;
- (double)doubleValue;
- (id)init;
- (unsigned int)unsignedIntValue;
- (BOOL)_tryRetain;
- (BOOL)boolValue;
- (unsigned short)unsignedShortValue;
- (long long)longValue;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })decimalValue;
- (unsigned long long)unsignedLongValue;
- (short)shortValue;
- (oneway void)release;

@end
