@interface CloudKit.CloudCoreContainerImplementation : CKContainerImplementation {
    void /* unknown type, empty encoding */ sessionID;
    void /* unknown type, empty encoding */ invalidationHandler;
    void /* unknown type, empty encoding */ sessionInvalidationRegistrationToken;
}

- (void)resolvePersonaValues:(id)a0;
- (void)noteSessionInvalidation:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)init;
- (id)initWithContainerID:(id)a0 options:(id)a1;
- (void)dealloc;

@end
