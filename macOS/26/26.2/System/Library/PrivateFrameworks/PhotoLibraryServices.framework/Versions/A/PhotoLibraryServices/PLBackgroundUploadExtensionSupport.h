@interface PLBackgroundUploadExtensionSupport : NSObject

+ (BOOL)_containsValidExtensionFromExtensionRecord:(id)a0 extensionPointLabel:(id)a1;
+ (id)_baseURLFromExtensionRecord:(id)a0;
+ (BOOL)_containsValidExtensionForApplicationRecord:(id)a0 extensionPointLabel:(id)a1;
+ (BOOL)_validInfoDictionaryFromExtensionRecord:(id)a0 extensionPointLabel:(id)a1;
+ (long long)containsValidExtensionFromAuditToken:(struct { unsigned int x0[8]; })a0 extensionPointLabel:(id)a1;
+ (BOOL)isValidExtensionFromValidationType:(long long)a0;

- (id)_validatedBundleIdentifierWithClientAuthorization:(id)a0;
- (id)backgroundUploadJobConfigurationPredicateWithClientAuthorization:(id)a0;
- (id)backgroundUploadJobPredicateWithClientAuthorization:(id)a0 managedObjectContext:(id)a1;

@end
