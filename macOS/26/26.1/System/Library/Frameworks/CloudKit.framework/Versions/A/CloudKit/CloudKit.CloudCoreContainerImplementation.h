@interface CloudKit.CloudCoreContainerImplementation : CKContainerImplementation {
    void /* unknown type, empty encoding */ sessionID;
    void /* unknown type, empty encoding */ invalidationHandler;
    void /* unknown type, empty encoding */ sessionInvalidationRegistrationToken;
}

- (id)CKPropertiesDescription;
- (id)initWithContainerID:(id)a0 options:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)noteSessionInvalidation:(id)a0;
- (void)resolvePersonaValues:(id)a0;
- (id)init;

@end
