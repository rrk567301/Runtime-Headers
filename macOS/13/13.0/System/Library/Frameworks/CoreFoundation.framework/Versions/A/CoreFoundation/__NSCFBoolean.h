@interface __NSCFBoolean : NSNumber

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (oneway void)release;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)unsignedIntValue;
- (long long)longLongValue;
- (long long)longValue;
- (float)floatValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned short)unsignedShortValue;
- (unsigned char)unsignedCharValue;
- (double)doubleValue;
- (short)shortValue;
- (int)intValue;
- (unsigned long long)unsignedLongValue;
- (char)charValue;
- (const char *)objCType;
- (id)descriptionWithLocale:(id)a0;
- (id)stringValue;
- (BOOL)isEqualToNumber:(id)a0;
- (void)getValue:(void *)a0;
- (long long)integerValue;
- (unsigned long long)unsignedIntegerValue;
- (BOOL)boolValue;
- (unsigned long long)_cfTypeID;
- (long long)_cfNumberType;
- (unsigned char)_getValue:(void *)a0 forType:(long long)a1;
- (long long)_reverseCompare:(id)a0;
- (long long)compare:(id)a0;

@end
