@interface _PFCachedNumber : NSNumber

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;
+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;

- (const char *)objCType;
- (long long)integerValue;
- (id)descriptionWithLocale:(id)a0;
- (BOOL)boolValue;
- (id)copy;
- (double)doubleValue;
- (id)retain;
- (short)shortValue;
- (int)intValue;
- (id)stringValue;
- (oneway void)release;
- (char)charValue;
- (unsigned long long)retainCount;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (void)getValue:(void *)a0;
- (unsigned long long)unsignedLongValue;
- (long long)longValue;
- (long long)longLongValue;
- (unsigned long long)unsignedIntegerValue;
- (BOOL)_tryRetain;
- (unsigned int)unsignedIntValue;
- (id)description;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (unsigned long long)unsignedLongLongValue;
- (id)autorelease;
- (float)floatValue;
- (unsigned short)unsignedShortValue;
- (unsigned char)unsignedCharValue;
- (id)init;

@end
