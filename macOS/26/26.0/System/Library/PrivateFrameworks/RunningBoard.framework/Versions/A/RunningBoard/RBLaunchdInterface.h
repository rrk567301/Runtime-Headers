@class NSString;

@interface RBLaunchdInterface : NSObject <RBLaunchdInterfacing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;

- (id)submitExtensionWithExecutableURL:(id)a0 properties:(id)a1 domain:(id)a2 error:(out id *)a3;
- (id)jobWithPlist:(id)a0 domain:(id)a1;
- (id)domainForUser:(unsigned int)a0;
- (id)domainForPid:(int)a0;
- (id)instancePropertiesFromOverlay:(id)a0;
- (id)propertiesForPid:(int)a0 error:(out id *)a1;
- (id)forJob:(id)a0 createInstance:(unsigned char[16])a1 properties:(id)a2 error:(out id *)a3;
- (id)instancePropertiesFromJobProperties:(id)a0;
- (id)currentDomain;
- (id)copyJobsManagedBy:(id)a0 error:(out id *)a1;
- (id)submitExtension:(id)a0 overlay:(id)a1 domain:(id)a2 error:(out id *)a3;
- (id)copyJobWithLabel:(id)a0 domain:(id)a1;
- (id)propertiesForJob:(id)a0 error:(out id *)a1;
- (id)copyJobWithPid:(int)a0;
- (id)jobWithPlist:(id)a0;

@end
