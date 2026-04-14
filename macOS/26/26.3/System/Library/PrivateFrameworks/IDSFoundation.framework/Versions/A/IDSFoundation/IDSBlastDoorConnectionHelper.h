@interface IDSBlastDoorConnectionHelper : NSObject

@property (retain, nonatomic) id idsBlastDoor;

+ (id)getBlastDoorSharedConnection;

- (void)addAllowlistedKey:(id)a0 toValidatedPayload:(id)a1 fromOriginalPayload:(id)a2;
- (void)writeBlastDoorPayloadToDiskIfNecessary:(id)a0 withContext:(id)a1;
- (void)auditMissingHeaderKeys:(id)a0 target:(id)a1;
- (BOOL)removeAllowlistedKey:(id)a0 fromPayload:(id)a1;
- (void)diffuseAPSUserPayload:(id)a0 topic:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)init;
- (void)diffuseClientMessage:(id)a0 context:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)commandEnabledForBlastDoor:(id)a0 topic:(id)a1;

@end
