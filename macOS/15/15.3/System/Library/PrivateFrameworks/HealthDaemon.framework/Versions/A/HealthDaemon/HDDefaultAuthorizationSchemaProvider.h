@class NSString;

@interface HDDefaultAuthorizationSchemaProvider : NSObject <HDAuthorizationSchemaProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)isClientAuthorizedToReadObject:(id)a0 sourceBundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (long long)isClientAuthorizedToReadType:(id)a0 sourceBundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (long long)isClientAuthorizedToWriteObject:(id)a0 sourceBundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (long long)isClientAuthorizedToWriteType:(id)a0 sourceBundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (long long)setAuthorizationStatuses:(id)a0 authorizationModes:(id)a1 bundleIdentifier:(id)a2 options:(unsigned long long)a3 profile:(id)a4 error:(id *)a5;

@end
