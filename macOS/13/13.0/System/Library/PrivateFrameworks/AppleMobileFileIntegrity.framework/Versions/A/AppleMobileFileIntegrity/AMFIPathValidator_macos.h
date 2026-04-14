@class NSString, NSArray, NSDictionary, NSError, NSNumber;

@interface AMFIPathValidator_macos : NSObject {
    struct __SecCode { } *_code;
    BOOL _validated;
    NSDictionary *_infoDict;
    int _flags;
    unsigned long long _bootargs;
}

@property (readonly, nonatomic) BOOL isSigned;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL hasRestrictedEntitlements;
@property (readonly, nonatomic) BOOL hasOnlySoftRestrictedEntitlements;
@property (readonly, nonatomic) BOOL areEntitlementsValidated;
@property (readonly, nonatomic) BOOL isApple;
@property (readonly, nonatomic) BOOL isDevelopment;
@property (readonly, nonatomic) BOOL shouldUnrestrict;
@property (readonly, nonatomic) BOOL allowsLegacyDebug;
@property (readonly, nonatomic) NSNumber *sdkVersion;
@property (readonly, nonatomic) NSString *teamIdentifier;
@property (readonly, nonatomic) NSArray *unsatisfiedEntitlements;

- (void)dealloc;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)validateWithError:(id *)a0;
- (id)signingIdentifier;
- (id)initWithURL:(id)a0 withFlags:(int)a1;
- (id)initWithURL:(id)a0 withFileOffset:(unsigned long long)a1;
- (id)initWithURL:(id)a0 withFileOffset:(unsigned long long)a1 withFlags:(int)a2;
- (id)initWithURL:(id)a0 withFileOffset:(unsigned long long)a1 withFlags:(int)a2 hasRestrictedEntitlements:(BOOL)a3 hasOnlySoftRestrictedEntitlements:(BOOL)a4;
- (id)initWithURL:(id)a0 withCpuType:(int)a1 withCpuSubType:(int)a2;
- (id)initWithURL:(id)a0 withCpuType:(int)a1 withCpuSubType:(int)a2 withFlags:(int)a3;
- (id)initWithURL:(id)a0 withCpuType:(int)a1 withCpuSubType:(int)a2 withFlags:(int)a3 hasRestrictedEntitlements:(BOOL)a4 hasOnlySoftRestrictedEntitlements:(BOOL)a5;
- (id)initWithCode:(const struct __SecCode { } *)a0 withFlags:(int)a1 hasRestrictedEntitlements:(BOOL)a2 hasOnlySoftRestrictedEntitlements:(BOOL)a3;
- (id)cdhashAsData;
- (id)mainExecutable;
- (id)certChain;
- (id)derCertChain;
- (id)codePath;
- (BOOL)computedCdHash:(unsigned char[20])a0;
- (BOOL)splitEntitlementsIntoUnrestricted:(id *)a0 andSoftRestricted:(id *)a1 andRestricted:(id *)a2 andApplicationIdentifier:(id *)a3;
- (int)validateUsingMacOSProvisioningProfileWithRestrictedEntitlements:(id)a0 andSoftRestrictedEntitlements:(id)a1 andApplicationIdentifier:(id)a2;
- (int)validateUsingMacOSProvisioningProfile;

@end
