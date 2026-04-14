@interface IDSBlastDoorConnectionHelper : NSObject

@property (retain, nonatomic) id idsBlastDoor;

+ (id)getBlastDoorSharedConnection;

- (void)auditMissingHeaderKeys:(id)a0 target:(id)a1;
- (void)diffuseClientMessage:(id)a0 context:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)removeAllowlistedKey:(id)a0 fromPayload:(id)a1;
- (void)diffuseAPSUserPayload:(id)a0 topic:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)writeBlastDoorPayloadToDiskIfNecessary:(id)a0 withContext:(id)a1;
- (void)addAllowlistedKey:(id)a0 toValidatedPayload:(id)a1 fromOriginalPayload:(id)a2;
- (BOOL)commandEnabledForBlastDoor:(id)a0 topic:(id)a1;
- (id)init;

@end
