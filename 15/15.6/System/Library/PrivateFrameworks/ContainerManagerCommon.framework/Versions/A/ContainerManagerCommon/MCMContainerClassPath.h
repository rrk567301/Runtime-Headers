@class NSString, MCMUserIdentity, MCMPOSIXUser, NSURL;

@interface MCMContainerClassPath : NSObject <MCMContainerPathHasComponents, NSCopying> {
    char _caseSensitive;
    char _caseSensitiveDetermined;
    char _supportsDataProtection;
    char _supportsDataProtectionDetermined;
    char _classURLCreated;
    char _symlinkClassURLCreated;
    NSURL *_homeDirectoryURL;
}

@property (readonly, nonatomic) NSString *categoryComponent;
@property (readonly, nonatomic) NSString *classComponent;
@property (readonly, nonatomic) NSString *symlinkClassComponent;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic, getter=isCaseSensitive) char caseSensitive;
@property (readonly, nonatomic) char supportsDataProtection;
@property (nonatomic) char exists;
@property (readonly, nonatomic) MCMPOSIXUser *posixOwner;
@property (readonly, nonatomic) unsigned short posixMode;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSURL *categoryURL;
@property (readonly, nonatomic) NSURL *classURL;
@property (readonly, nonatomic) NSURL *symlinkClassURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_baseURLForUserIdentity:(id)a0;
+ (id)_baseURLForUserIdentity:(id)a0 containerClass:(unsigned long long)a1;
+ (id)_categoryComponentForContainerClass:(unsigned long long)a0;
+ (id)_classComponentForContainerClass:(unsigned long long)a0;
+ (char)_inLibraryRepairBlock_createSymlinkIfNecessaryTargeting:(id)a0 atURL:(id)a1 mode:(unsigned short)a2 owner:(id)a3 error:(id *)a4;
+ (char)_inLibraryRepairBlock_createURLIfNecessary:(id)a0 mode:(unsigned short)a1 owner:(id)a2 dataProtectionClass:(int)a3 exists:(char *)a4 error:(id *)a5;
+ (unsigned short)_modeForContainerClass:(unsigned long long)a0;
+ (id)_symlinkClassComponentForContainerClass:(unsigned long long)a0;
+ (id)containerPathForContainerIdentity:(id)a0;
+ (id)containerPathForUserIdentity:(id)a0 containerClass:(unsigned long long)a1;
+ (id)containerPathTypeClasses;
+ (id)posixOwnerForContainerClass:(unsigned long long)a0 user:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_createSymlinkIfNecessaryTargeting:(id)a0 atURL:(id)a1 mode:(unsigned short)a2 owner:(id)a3 error:(id *)a4;
- (char)_createURLIfNecessary:(id)a0 mode:(unsigned short)a1 owner:(id)a2 dataProtectionClass:(int)a3 error:(id *)a4;
- (char)_obj1:(id)a0 isEqualToObj2:(id)a1;
- (char)createIfNecessaryWithError:(id *)a0;
- (char)createSymlinksIfNecessaryWithError:(id *)a0;
- (id)initWithBaseURL:(id)a0 categoryComponent:(id)a1 classComponent:(id)a2 symlinkClassComponent:(id)a3 containerClass:(unsigned long long)a4 POSIXOwner:(id)a5 POSIXMode:(unsigned short)a6 userIdentity:(id)a7;
- (char)isEqualToContainerClassPath:(id)a0;

@end
