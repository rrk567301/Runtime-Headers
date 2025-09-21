@interface _PFCachedNumber : NSNumber

+ (id)alloc;
+ (id)new;
+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;

- (long long)integerValue;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (const char *)objCType;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (unsigned short)unsignedShortValue;
- (void)getValue:(void *)a0;
- (float)floatValue;
- (BOOL)boolValue;
- (void)dealloc;
- (short)shortValue;
- (BOOL)_tryRetain;
- (id)stringValue;
- (id)copy;
- (id)retain;
- (id)init;
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
- (long long)longValue;

@end
