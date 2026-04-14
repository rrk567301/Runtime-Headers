@interface OS_xpc_session : OS_object

- (void)_xref_dispose;
- (id)init;
- (id)description;
- (oneway void)release;
- (void)dealloc;

@end
