@interface __NSCFNumber : NSNumber

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)_cfTypeID;
- (long long)compare:(id)a0;
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
- (BOOL)_isDeallocating;
- (id)descriptionWithLocale:(id)a0;
- (BOOL)_tryRetain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)retainCount;
- (unsigned long long)unsignedLongLongValue;
- (BOOL)boolValue;
- (id)description;
- (double)doubleValue;
- (id)stringValue;
- (unsigned long long)unsignedLongValue;
- (long long)longValue;
- (oneway void)release;
- (unsigned char)unsignedCharValue;
- (BOOL)isNSNumber__;
- (long long)_cfNumberType;
- (unsigned char)_getValue:(void *)a0 forType:(long long)a1;
- (long long)_reverseCompare:(id)a0;
- (BOOL)isEqualToNumber:(id)a0;

@end
