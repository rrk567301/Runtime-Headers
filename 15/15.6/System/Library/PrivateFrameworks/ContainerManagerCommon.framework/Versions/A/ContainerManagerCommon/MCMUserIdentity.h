@class NSString, MCMPOSIXUser, NSURL;

@interface MCMUserIdentity : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) id plist;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic, getter=isDataSeparated) char dataSeparated;
@property (readonly, nonatomic, getter=isNoSpecificPersona) char noSpecificPersona;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSURL *homeDirectoryURL;
@property (readonly, nonatomic) char homeDirectoryExists;
@property (readonly, nonatomic) int personaType;
@property (readonly, nonatomic) unsigned int kernelPersonaID;
@property (nonatomic) long long extensionHandle;

+ (id)_identifierForPOSIXUID:(unsigned int)a0 personaUniqueString:(id)a1 personaType:(int)a2;
+ (char)isUserIdentityRequiredForContainerClass:(unsigned long long)a0;
+ (id)userIdentityWithPlist:(id)a0 cache:(id)a1 error:(unsigned long long *)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_descriptionForPersonaType:(int)a0;
- (id)initWithPOSIXUser:(id)a0 homeDirectoryURL:(id)a1 personaUniqueString:(id)a2 personaType:(int)a3 kernelPersonaID:(unsigned int)a4;
- (id)initWithPlist:(id)a0 cache:(id)a1 error:(unsigned long long *)a2;
- (id)initWithVersion1PlistDictionary:(id)a0 cache:(id)a1 error:(unsigned long long *)a2;
- (id)initWithVersion2PlistDictionary:(id)a0 cache:(id)a1 error:(unsigned long long *)a2;
- (char)isEqualToUserIdentity:(id)a0;
- (char)isStrictlyEqualToUserIdentity:(id)a0;
- (id)userIdentityWithPOSIXUser:(id)a0;

@end
