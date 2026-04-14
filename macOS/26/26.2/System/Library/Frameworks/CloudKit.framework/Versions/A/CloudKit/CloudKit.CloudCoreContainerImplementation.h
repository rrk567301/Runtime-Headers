@interface CloudKit.CloudCoreContainerImplementation : CKContainerImplementation {
    void /* unknown type, empty encoding */ sessionID;
    void /* unknown type, empty encoding */ invalidationHandler;
    void /* unknown type, empty encoding */ sessionInvalidationRegistrationToken;
}

- (void)resolvePersonaValues:(id)a0;
- (void).cxx_destruct;
- (void)noteSessionInvalidation:(id)a0;
- (id)initWithContainerID:(id)a0 options:(id)a1;
- (id)init;
- (id)CKPropertiesDescription;
- (void)dealloc;

@end
