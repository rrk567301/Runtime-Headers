@interface _PFCachedNumber : NSNumber

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;

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
- (unsigned long long)retainCount;
- (unsigned long long)unsignedLongLongValue;
- (id)autorelease;
- (BOOL)boolValue;
- (id)copy;
- (id)description;
- (double)doubleValue;
- (id)stringValue;
- (unsigned long long)unsignedLongValue;
- (long long)longValue;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (oneway void)release;
- (unsigned char)unsignedCharValue;
- (id)init;
- (void)dealloc;

@end
