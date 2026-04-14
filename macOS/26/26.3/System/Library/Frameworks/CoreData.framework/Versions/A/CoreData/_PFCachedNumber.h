@interface _PFCachedNumber : NSNumber

+ (id)alloc;
+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;

- (long long)longLongValue;
- (unsigned char)unsignedCharValue;
- (id)copy;
- (float)floatValue;
- (void)getValue:(void *)a0;
- (const char *)objCType;
- (int)intValue;
- (unsigned long long)retainCount;
- (char)charValue;
- (id)autorelease;
- (unsigned long long)unsignedLongLongValue;
- (id)retain;
- (id)descriptionWithLocale:(id)a0;
- (unsigned long long)unsignedIntegerValue;
- (id)description;
- (long long)integerValue;
- (double)doubleValue;
- (id)init;
- (unsigned int)unsignedIntValue;
- (BOOL)_tryRetain;
- (BOOL)boolValue;
- (unsigned short)unsignedShortValue;
- (long long)longValue;
- (BOOL)_isDeallocating;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (void)dealloc;
- (id)stringValue;
- (unsigned long long)unsignedLongValue;
- (short)shortValue;
- (oneway void)release;

@end
