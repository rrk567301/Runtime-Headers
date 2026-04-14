@class NSString;

@interface GKAuthenticationMachine : NSObject <NSCoding>

@property (nonatomic) long long loginCancelledCount;
@property (retain, nonatomic) NSString *accountName;
@property (nonatomic) long long serverEnvironment;

+ (BOOL)supportsSecureCoding;
+ (id)authMachineForEnvironment:(long long)a0;
+ (void)migratePreBlacktailAccountInformation;
+ (void)migratePreSundanceAccountInformation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
