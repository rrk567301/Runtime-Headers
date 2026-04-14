@interface _PFCachedNumber : NSNumber

+ (id)new;
+ (id)alloc;
+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;

- (void)getValue:(void *)a0;
- (unsigned int)unsignedIntValue;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (BOOL)_tryRetain;
- (const char *)objCType;
- (unsigned long long)unsignedIntegerValue;
- (id)stringValue;
- (id)autorelease;
- (id)descriptionWithLocale:(id)a0;
- (char)charValue;
- (long long)longLongValue;
- (double)doubleValue;
- (long long)integerValue;
- (short)shortValue;
- (BOOL)_isDeallocating;
- (int)intValue;
- (long long)longValue;
- (unsigned long long)unsignedLongLongValue;
- (BOOL)boolValue;
- (unsigned long long)unsignedLongValue;
- (unsigned char)unsignedCharValue;
- (id)copy;
- (float)floatValue;
- (unsigned short)unsignedShortValue;
- (id)retain;
- (id)init;
- (id)description;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
