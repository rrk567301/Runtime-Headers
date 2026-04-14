@class NSString;

@interface OS_xpc_int64 : OS_xpc_object <OS_xpc_int64>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (BOOL)retainWeakReference;

@end
