@class NSXPCConnection, NSArray;

@interface BTMRegistrar : NSObject

@property (class, readonly) BTMRegistrar *shared;

@property (readonly) NSXPCConnection *connection;
@property (readonly) NSArray *UIDs;

- (id)init;
- (void).cxx_destruct;
- (long long)registerItem:(id *)a0 withAuditToken:(struct { unsigned int x0[8]; } *)a1 type:(long long)a2 relativeURL:(id)a3 configuration:(id)a4 uid:(unsigned int)a5;
- (long long)checkBackgroundAppRefreshAllowedForAppURL:(id)a0 shouldRegister:(BOOL)a1 uid:(unsigned int)a2 allowed:(BOOL *)a3;
- (id)fetchItemWithAppURL:(id)a0 type:(long long)a1 relativeURL:(id)a2 configuration:(id)a3 uid:(unsigned int)a4;
- (BOOL)getEffectiveDisposition:(long long *)a0 andLWCR:(id *)a1 forAppURL:(id)a2 type:(long long)a3 relativeURL:(id)a4 configuration:(id)a5 uid:(unsigned int)a6;
- (long long)registerItem:(id *)a0 withBundleURL:(id)a1 type:(long long)a2 relativeURL:(id)a3 configuration:(id)a4 uid:(unsigned int)a5;

@end
