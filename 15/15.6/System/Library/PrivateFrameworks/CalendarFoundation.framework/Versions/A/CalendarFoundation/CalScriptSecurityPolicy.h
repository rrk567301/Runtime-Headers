@interface CalScriptSecurityPolicy : NSObject

+ (char)allowAuditToken:(struct { unsigned int x0[8]; })a0 forServiceType:(struct __CFString { } *)a1;
+ (char)isPermittedApplicationSelector:(SEL)a0;
+ (char)allowApplicationSelector:(SEL)a0 forServiceType:(struct __CFString { } *)a1;
+ (char)allowAuditTokenOnCurrentAppleEventForServiceType:(struct __CFString { } *)a0;
+ (char)allowCreateCommandWithImplementationClassName:(id)a0 forServiceType:(struct __CFString { } *)a1;
+ (char)isPermittedCreateClassName:(id)a0;
+ (void)setErrorOnCurrentCommand;

@end
