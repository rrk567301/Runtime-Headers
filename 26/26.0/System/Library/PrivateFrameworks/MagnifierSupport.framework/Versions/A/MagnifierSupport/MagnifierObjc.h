@interface MagnifierObjc : NSObject

+ (BOOL)catchException:(id /* block */)a0 error:(id *)a1;
+ (void)sandboxInit;
+ (void)sbs_unlockDeviceIfNeededAndPerform:(id /* block */)a0;

@end
