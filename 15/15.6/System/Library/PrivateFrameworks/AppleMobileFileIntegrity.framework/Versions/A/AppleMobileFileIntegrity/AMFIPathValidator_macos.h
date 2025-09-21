@class NSString, NSDictionary, NSArray, NSError, NSNumber;

@interface AMFIPathValidator_macos : NSObject {
    struct __SecCode { } *_code;
    char _validated;
    NSDictionary *_infoDict;
    int _flags;
    unsigned long long _bootargs;
    char _masQACertsAllowed;
}

@property (readonly, nonatomic) char isSigned;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) char hasRestrictedEntitlements;
@property (readonly, nonatomic) char hasOnlySoftRestrictedEntitlements;
@property (readonly, nonatomic) char areEntitlementsValidated;
@property (readonly, nonatomic) char isApple;
@property (readonly, nonatomic) char isDevelopment;
@property (readonly, nonatomic) char shouldUnrestrict;
@property (readonly, nonatomic) char allowsLegacyDebug;
@property (readonly, nonatomic) NSNumber *sdkVersion;
@property (readonly, nonatomic) NSString *teamIdentifier;
@property (readonly, nonatomic) NSString *signingIdentifier;
@property (readonly) NSDictionary *infoPlist;
@property (readonly, nonatomic) NSArray *unsatisfiedEntitlements;
@property (readonly, nonatomic) unsigned int signerType;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (char)validateWithError:(id *)a0;
- (char)computedCdHash:(unsigned char[20])a0;
- (id)cdhashAsData;
- (id)certChain;
- (id)codePath;
- (id)derCertChain;
- (id)initWithCode:(struct __SecCode { } *)a0 withFlags:(int)a1 hasRestrictedEntitlements:(char)a2 hasOnlySoftRestrictedEntitlements:(char)a3;
- (id)initWithURL:(id)a0 withCpuType:(int)a1 withCpuSubType:(int)a2;
- (id)initWithURL:(id)a0 withCpuType:(int)a1 withCpuSubType:(int)a2 withFlags:(int)a3;
- (id)initWithURL:(id)a0 withCpuType:(int)a1 withCpuSubType:(int)a2 withFlags:(int)a3 hasRestrictedEntitlements:(char)a4 hasOnlySoftRestrictedEntitlements:(char)a5;
- (id)initWithURL:(id)a0 withFileOffset:(unsigned long long)a1;
- (id)initWithURL:(id)a0 withFileOffset:(unsigned long long)a1 withFlags:(int)a2;
- (id)initWithURL:(id)a0 withFileOffset:(unsigned long long)a1 withFlags:(int)a2 hasRestrictedEntitlements:(char)a3 hasOnlySoftRestrictedEntitlements:(char)a4;
- (id)initWithURL:(id)a0 withFlags:(int)a1;
- (char)macAppStoreQASigned;
- (id)mainExecutable;
- (void)sendMetrics;
- (char)splitEntitlementsIntoUnrestricted:(id *)a0 andSoftRestricted:(id *)a1 andRestricted:(id *)a2 andApplicationIdentifier:(id *)a3;
- (int)validateUsingMacOSProvisioningProfile;
- (int)validateUsingMacOSProvisioningProfileWithRestrictedEntitlements:(id)a0 andSoftRestrictedEntitlements:(id)a1 andApplicationIdentifier:(id)a2;

@end
