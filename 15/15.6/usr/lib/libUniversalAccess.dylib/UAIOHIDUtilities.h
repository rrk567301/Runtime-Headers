@interface UAIOHIDUtilities : NSObject

+ (char)setBoolValue:(BOOL)a0 forProperty:(id)a1 error:(id *)a2;
+ (void *)_copyIOHIDEventSystemClientValueForProperty:(id)a0 error:(id *)a1;
+ (struct __IOHIDEventSystemClient { } *)_createIOHIDEventSystemClientWithError:(id *)a0;
+ (char)_isCurrentSessionOnConsole;
+ (char)_isHIDValue:(void *)a0 ofExpectedType:(unsigned long long)a1 forProperty:(id)a2 error:(id *)a3;
+ (char)_setIOHIDEventSystemClientValue:(void *)a0 forProperty:(id)a1 error:(id *)a2;
+ (void)disableIOHIDEventSystemClientCache;
+ (void)enableIOHIDEventSystemClientCache;
+ (char)getBoolValueForProperty:(id)a0 error:(id *)a1;
+ (id)getNumberValueForProperty:(id)a0 error:(id *)a1;
+ (char)setNumberValue:(id)a0 forProperty:(id)a1 error:(id *)a2;

@end
