@interface CloudKit.CloudCoreContainerImplementation : CKContainerImplementation {
    void /* unknown type, empty encoding */ sessionID;
    void /* unknown type, empty encoding */ invalidationHandler;
    void /* unknown type, empty encoding */ sessionInvalidationRegistrationToken;
}

- (void)dealloc;
- (id)CKPropertiesDescription;
- (id)init;
- (id)initWithContainerID:(id)a0 options:(id)a1;
- (void)resolvePersonaValues:(id)a0;
- (void)noteSessionInvalidation:(id)a0;
- (void).cxx_destruct;

@end
