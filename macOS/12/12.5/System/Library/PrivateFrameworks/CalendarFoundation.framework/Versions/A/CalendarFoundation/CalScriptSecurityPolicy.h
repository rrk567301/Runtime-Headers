@interface CalScriptSecurityPolicy : NSObject

+ (BOOL)isPermittedApplicationSelector:(SEL)a0;
+ (BOOL)allowAuditTokenOnCurrentAppleEventForServiceType:(struct __CFString { } *)a0;
+ (BOOL)isPermittedCreateClassName:(id)a0;
+ (BOOL)allowAuditToken:(struct { unsigned int x0[8]; })a0 forServiceType:(struct __CFString { } *)a1;
+ (void)setErrorOnCurrentCommand;
+ (BOOL)allowApplicationSelector:(SEL)a0 forServiceType:(struct __CFString { } *)a1;
+ (BOOL)allowCreateCommandWithImplementationClassName:(id)a0 forServiceType:(struct __CFString { } *)a1;

@end
