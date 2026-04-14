@interface __NSCFNumber : NSNumber

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (const char *)objCType;
- (long long)integerValue;
- (id)descriptionWithLocale:(id)a0;
- (BOOL)boolValue;
- (double)doubleValue;
- (id)retain;
- (short)shortValue;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (int)intValue;
- (id)stringValue;
- (oneway void)release;
- (char)charValue;
- (unsigned long long)retainCount;
- (void)getValue:(void *)a0;
- (unsigned long long)unsignedLongValue;
- (unsigned long long)_cfTypeID;
- (long long)longValue;
- (long long)longLongValue;
- (unsigned long long)unsignedIntegerValue;
- (BOOL)_tryRetain;
- (unsigned int)unsignedIntValue;
- (id)description;
- (BOOL)_isDeallocating;
- (unsigned long long)unsignedLongLongValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (float)floatValue;
- (unsigned short)unsignedShortValue;
- (unsigned char)unsignedCharValue;
- (BOOL)isNSNumber__;
- (long long)_cfNumberType;
- (unsigned char)_getValue:(void *)a0 forType:(long long)a1;
- (long long)_reverseCompare:(id)a0;
- (BOOL)isEqualToNumber:(id)a0;

@end
