@interface CloudKit.CloudCoreContainerImplementation : CKContainerImplementation {
    void /* unknown type, empty encoding */ sessionID;
    void /* unknown type, empty encoding */ invalidationHandler;
    void /* unknown type, empty encoding */ sessionInvalidationRegistrationToken;
}

- (id)CKPropertiesDescription;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)noteSessionInvalidation:(id)a0;
- (void)resolvePersonaValues:(id)a0;
- (id)initWithContainerID:(id)a0 options:(id)a1;

@end
