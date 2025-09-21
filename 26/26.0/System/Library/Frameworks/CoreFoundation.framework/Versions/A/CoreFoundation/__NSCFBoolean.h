@interface __NSCFBoolean : NSNumber

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (long long)integerValue;
- (const char *)objCType;
- (unsigned long long)_cfTypeID;
- (BOOL)_isDeallocating;
- (unsigned short)unsignedShortValue;
- (void)getValue:(void *)a0;
- (float)floatValue;
- (BOOL)boolValue;
- (short)shortValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_tryRetain;
- (id)stringValue;
- (id)retain;
- (long long)compare:(id)a0;
- (double)doubleValue;
- (long long)longLongValue;
- (id)descriptionWithLocale:(id)a0;
- (unsigned long long)unsignedIntegerValue;
- (unsigned long long)retainCount;
- (id)description;
- (unsigned char)unsignedCharValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned int)unsignedIntValue;
- (char)charValue;
- (oneway void)release;
- (unsigned long long)unsignedLongValue;
- (int)intValue;
- (unsigned long long)hash;
- (long long)longValue;
- (BOOL)isEqual:(id)a0;
- (long long)_cfNumberType;
- (unsigned char)_getValue:(void *)a0 forType:(long long)a1;
- (long long)_reverseCompare:(id)a0;
- (BOOL)isEqualToNumber:(id)a0;

@end
