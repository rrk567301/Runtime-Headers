@interface AVTCoreDataCloudKitMirroringConfiguration : NSObject

+ (char)cloudKitMirroringEnabled;
+ (void)configureMirroringRequestOptions:(id)a0;
+ (void)configureMirroringRequestOptions:(id)a0 discretionary:(char)a1;
+ (void)configureStoreDescriptionForMirroring:(id)a0 logger:(id)a1;
+ (id)createMirroringHandlerWithEnvironment:(id)a0;
+ (id)currentContainerIdentifier;
+ (void)deviceConfigurationSupportsCloudKitMirroringWithLogger:(id)a0 completionHandler:(id /* block */)a1;
+ (id)managedModelAttributesRequiredForMirroring;
+ (char)manateeContainer:(id)a0;

@end
