@interface __NSCFNumber : NSNumber

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (long long)longLongValue;
- (unsigned char)unsignedCharValue;
- (float)floatValue;
- (void)getValue:(void *)a0;
- (const char *)objCType;
- (int)intValue;
- (unsigned long long)retainCount;
- (char)charValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)_cfTypeID;
- (id)retain;
- (id)descriptionWithLocale:(id)a0;
- (unsigned long long)unsignedIntegerValue;
- (id)description;
- (long long)integerValue;
- (double)doubleValue;
- (long long)compare:(id)a0;
- (unsigned int)unsignedIntValue;
- (BOOL)_tryRetain;
- (BOOL)boolValue;
- (unsigned short)unsignedShortValue;
- (long long)longValue;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)stringValue;
- (unsigned long long)hash;
- (unsigned long long)unsignedLongValue;
- (short)shortValue;
- (oneway void)release;
- (BOOL)isNSNumber__;
- (long long)_cfNumberType;
- (unsigned char)_getValue:(void *)a0 forType:(long long)a1;
- (long long)_reverseCompare:(id)a0;
- (BOOL)isEqualToNumber:(id)a0;

@end
