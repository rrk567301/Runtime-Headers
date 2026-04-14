@class NSString;

@interface HDVisionPrescriptionAuthorizationSchemaProvider : NSObject <HDAuthorizationSchemaProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)isClientAuthorizedToReadObject:(id)a0 sourceBundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (long long)isClientAuthorizedToWriteObject:(id)a0 sourceBundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (long long)setObjectAuthorizationStatuses:(id)a0 forObjectType:(id)a1 bundleIdentifier:(id)a2 sessionIdentifier:(id)a3 profile:(id)a4 error:(id *)a5;

@end
