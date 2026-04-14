@interface _PFCachedNumber : NSNumber

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;
+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (id)copy;
- (id)description;
- (id)init;
- (unsigned char)unsignedCharValue;
- (unsigned short)unsignedShortValue;
- (double)doubleValue;
- (short)shortValue;
- (int)intValue;
- (unsigned int)unsignedIntValue;
- (long long)longLongValue;
- (char)charValue;
- (const char *)objCType;
- (unsigned long long)unsignedLongValue;
- (unsigned long long)unsignedLongLongValue;
- (float)floatValue;
- (long long)longValue;
- (id)descriptionWithLocale:(id)a0;
- (id)stringValue;
- (void)getValue:(void *)a0;
- (long long)integerValue;
- (unsigned long long)unsignedIntegerValue;
- (BOOL)boolValue;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;

@end
