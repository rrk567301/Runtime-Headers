@interface _PASXPCServerHelper : NSObject

+ (char)checkForAndLogTrueBooleanEntitlement:(id)a0 connection:(id)a1 serviceName:(id)a2 logHandle:(id)a3;
+ (char)checkForAndLogTrueBooleanEntitlement:(id)a0 connection:(id)a1 serviceName:(id)a2 logHandle:(id)a3 shouldGenerateCrashReport:(char)a4;
+ (char)hasTrueBooleanEntitlement:(id)a0 connection:(id)a1 logHandle:(id)a2;
+ (char)shouldAcceptConnection:(id)a0 serviceName:(id)a1 whitelistedServerInterface:(id)a2 whitelistedClientInterface:(id)a3 requestHandler:(id)a4 validateConnection:(id /* block */)a5 setupClientProxy:(id /* block */)a6 interruptionHandler:(id /* block */)a7 invalidationHandler:(id /* block */)a8 logHandle:(id)a9;

@end
