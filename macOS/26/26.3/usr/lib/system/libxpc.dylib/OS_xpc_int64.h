@class NSString;

@interface OS_xpc_int64 : OS_xpc_object <OS_xpc_int64>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (oneway void)release;

@end
