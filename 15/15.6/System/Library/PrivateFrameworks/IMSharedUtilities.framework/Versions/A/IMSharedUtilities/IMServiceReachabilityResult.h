@class NSDictionary, NSString, IDSIDInfoResult;

@interface IMServiceReachabilityResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) IDSIDInfoResult *selfKTData;
@property (retain, nonatomic) NSDictionary *ktData;
@property (nonatomic) char reachabilityOverriddenToSuccessByPolicy;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) long long error;
@property (retain, nonatomic) NSDictionary *handleResults;
@property (nonatomic, getter=isFinal, setter=setFinal:) char final;
@property (nonatomic) char allAreReachable;
@property (nonatomic) char didCheckServer;

+ (id)finalResultForService:(id)a0 handleIDs:(id)a1 allAreReachable:(char)a2 checkedServer:(char)a3 error:(long long)a4;
+ (id)finalResultForService:(id)a0 handleIDs:(id)a1 allAreReachable:(char)a2 handleIsReachable:(id /* block */)a3 checkedServer:(char)a4 error:(long long)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updatePersistentMenu:(id)a0 forHandle:(id)a1;
- (id)createDictionary;
- (id)initWithService:(id)a0 error:(long long)a1 handleResults:(id)a2 isFinal:(char)a3 allAreReachable:(char)a4 didCheckServer:(char)a5;
- (void)updateBrandInfo:(id)a0 brandLogo:(id)a1 forHandle:(id)a2;

@end
