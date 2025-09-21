@class NSString, MCMUserIdentity, NSURL, MCMContainerClassPath, MCMPOSIXUser;

@interface MCMContainerPath : NSObject <MCMContainerPathHasComponents>

@property (readonly, nonatomic) NSString *containerRootComponent;
@property (readonly, nonatomic) NSString *containerDataComponent;
@property (readonly, nonatomic) NSURL *containerRootURL;
@property (readonly, nonatomic) NSURL *containerDataURL;
@property (readonly, nonatomic) NSURL *metadataURL;
@property (readonly, nonatomic) NSString *containerPathIdentifier;
@property (readonly, nonatomic) NSURL *containerSymlinkDataURL;
@property (readonly, nonatomic) MCMContainerClassPath *containerClassPath;
@property (readonly, nonatomic) MCMPOSIXUser *rootPOSIXOwner;
@property (readonly, nonatomic) unsigned short rootPOSIXMode;
@property (readonly, nonatomic) MCMPOSIXUser *dataPOSIXOwner;
@property (readonly, nonatomic) unsigned short dataPOSIXMode;
@property (readonly, nonatomic) MCMPOSIXUser *schemaPOSIXOwner;
@property (readonly, nonatomic) unsigned short schemaPOSIXMode;
@property (nonatomic) char exists;
@property (readonly, nonatomic) char transient;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic, getter=isRandomized) char randomized;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSURL *categoryURL;
@property (readonly, nonatomic) NSURL *classURL;
@property (readonly, nonatomic) NSURL *symlinkClassURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_containerClassPathClass;
+ (id)_posixOwnerForContainerSubdirectories:(unsigned long long)a0 user:(id)a1;
+ (id)containerPathForContainerClassPath:(id)a0 containerPathIdentifier:(id)a1;
+ (id)containerPathForContainerIdentity:(id)a0 containerPathIdentifier:(id)a1;
+ (id)containerPathForUserIdentity:(id)a0 containerClass:(unsigned long long)a1 containerPathIdentifier:(id)a2;
+ (id)containerPathFromURL:(id)a0 containerClassPath:(id)a1 relativePath:(id *)a2;
+ (id)containerPathIdentifierForCodeSignIdentifier:(id)a0 containerClass:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_createURLIfNecessary:(id)a0 mode:(unsigned short)a1 owner:(id)a2 dataProtectionClass:(int)a3 exists:(char *)a4 error:(id *)a5;
- (char)_obj1:(id)a0 isEqualToObj2:(id)a1;
- (id)containerPathForRealPath;
- (char)createDataURLIfNecessaryWithDataProtectionClass:(int)a0 error:(id *)a1;
- (char)createIfNecessaryWithDataProtectionClass:(int)a0 error:(id *)a1;
- (id)initWithContainerClassPath:(id)a0 containerPathIdentifier:(id)a1 containerRootComponent:(id)a2 containerDataComponent:(id)a3;
- (char)isEqualToContainerPath:(id)a0;

@end
