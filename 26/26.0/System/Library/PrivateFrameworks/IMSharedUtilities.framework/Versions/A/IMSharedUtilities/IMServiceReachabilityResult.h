@class NSDictionary, NSString, IDSIDInfoResult;

@interface IMServiceReachabilityResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IDSIDInfoResult *selfKTData;
@property (retain, nonatomic) NSDictionary *ktData;
@property (nonatomic) BOOL reachabilityOverriddenToSuccessByPolicy;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) long long error;
@property (retain, nonatomic) NSDictionary *handleResults;
@property (nonatomic, getter=isFinal, setter=setFinal:) BOOL final;
@property (nonatomic) BOOL allAreReachable;
@property (nonatomic) BOOL allSupportEncryption;
@property (nonatomic) BOOL didCheckServer;

+ (id)finalResultForService:(id)a0 handleIDs:(id)a1 allAreReachable:(BOOL)a2 allSupportEncryption:(BOOL)a3 checkedServer:(BOOL)a4 error:(long long)a5;
+ (id)finalResultForService:(id)a0 handleIDs:(id)a1 allAreReachable:(BOOL)a2 allSupportEncryption:(BOOL)a3 handleIsReachable:(id /* block */)a4 handleSupportsEncryption:(id /* block */)a5 checkedServer:(BOOL)a6 error:(long long)a7;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updatePersistentMenu:(id)a0 forHandle:(id)a1;
- (id)createDictionary;
- (id)initWithService:(id)a0 error:(long long)a1 handleResults:(id)a2 isFinal:(BOOL)a3 allAreReachable:(BOOL)a4 allSupportEncryption:(BOOL)a5 didCheckServer:(BOOL)a6;
- (void)updateBrandInfo:(id)a0 brandLogo:(id)a1 forHandle:(id)a2;

@end
