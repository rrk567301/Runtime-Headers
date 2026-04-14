@interface CRDaemonController : NSObject

+ (id)getAllowedListFromEntitlements:(id)a0;
+ (void)controlWithParameters:(id)a0 withReply:(id /* block */)a1;
+ (void)controlWithParametersImpl:(id)a0 withReply:(id /* block */)a1;
+ (BOOL)doLaunchControl:(id)a0 action:(id)a1;
+ (void *)getLibXPCInternalWithSymbol:(const char *)a0;
+ (BOOL)launchBinaryAt:(id)a0 arguments:(id)a1 environment:(id)a2;
+ (id)safeGetStringParam:(id)a0 key:(id)a1;

@end
