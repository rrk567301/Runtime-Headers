@class NSString, MCMPOSIXUser, NSURL;

@interface MCMUserIdentity : NSObject <NSCopying> {
    int _kernelPersonaType;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) id plist;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic, getter=isDataSeparated) BOOL dataSeparated;
@property (readonly, nonatomic, getter=isNoSpecificPersona) BOOL noSpecificPersona;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSURL *homeDirectoryURL;
@property (readonly, nonatomic) BOOL homeDirectoryExists;
@property (readonly, nonatomic) int personaType;
@property (readonly, nonatomic) unsigned int kernelPersonaID;
@property (readonly, nonatomic) int kernelPersonaType;
@property (nonatomic) long long extensionHandle;

+ (BOOL)isUserIdentityRequiredForContainerClass:(unsigned long long)a0;
+ (id)userIdentityWithPlist:(id)a0 cache:(id)a1 error:(unsigned long long *)a2;
+ (id)_identifierForPOSIXUID:(unsigned int)a0 personaUniqueString:(id)a1 personaType:(int)a2;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionForPersonaType:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToUserIdentity:(id)a0;
- (id)description;
- (BOOL)isStrictlyEqualToUserIdentity:(id)a0;
- (id)initWithVersion1PlistDictionary:(id)a0 cache:(id)a1 error:(unsigned long long *)a2;
- (id)initWithVersion2PlistDictionary:(id)a0 cache:(id)a1 error:(unsigned long long *)a2;
- (id)initWithPOSIXUser:(id)a0 homeDirectoryURL:(id)a1 personaUniqueString:(id)a2 personaType:(int)a3 kernelPersonaID:(unsigned int)a4;
- (id)init;
- (id)userIdentityWithPOSIXUser:(id)a0;
- (id)initWithPlist:(id)a0 cache:(id)a1 error:(unsigned long long *)a2;
- (void)dealloc;

@end
