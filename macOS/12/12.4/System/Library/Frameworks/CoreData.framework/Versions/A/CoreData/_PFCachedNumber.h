@interface _PFCachedNumber : NSNumber

+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)new;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copy;
- (void)dealloc;
- (id)description;
- (id)init;
- (const char *)objCType;
- (char)charValue;
- (unsigned char)unsignedCharValue;
- (short)shortValue;
- (unsigned short)unsignedShortValue;
- (int)intValue;
- (unsigned int)unsignedIntValue;
- (long long)longValue;
- (unsigned long long)unsignedLongValue;
- (float)floatValue;
- (double)doubleValue;
- (long long)longLongValue;
- (unsigned long long)unsignedLongLongValue;
- (BOOL)boolValue;
- (id)descriptionWithLocale:(id)a0;
- (id)stringValue;
- (void)getValue:(void *)a0;
- (long long)integerValue;
- (unsigned long long)unsignedIntegerValue;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;

@end
