@interface __NSCFNumber : NSNumber

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)_cfTypeID;
- (void)getValue:(void *)a0;
- (unsigned int)unsignedIntValue;
- (BOOL)_tryRetain;
- (const char *)objCType;
- (unsigned long long)unsignedIntegerValue;
- (id)stringValue;
- (id)descriptionWithLocale:(id)a0;
- (char)charValue;
- (long long)longLongValue;
- (BOOL)isNSNumber__;
- (double)doubleValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)integerValue;
- (long long)compare:(id)a0;
- (short)shortValue;
- (BOOL)_isDeallocating;
- (int)intValue;
- (long long)longValue;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)unsignedLongLongValue;
- (BOOL)boolValue;
- (unsigned long long)unsignedLongValue;
- (unsigned char)unsignedCharValue;
- (long long)_reverseCompare:(id)a0;
- (float)floatValue;
- (unsigned short)unsignedShortValue;
- (BOOL)isEqualToNumber:(id)a0;
- (id)retain;
- (unsigned long long)hash;
- (unsigned char)_getValue:(void *)a0 forType:(long long)a1;
- (id)description;
- (oneway void)release;
- (long long)_cfNumberType;
- (unsigned long long)retainCount;

@end
