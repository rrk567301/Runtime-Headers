@class NSString;

@interface GKAuthenticationMachine : NSObject <NSCoding>

@property (retain, nonatomic) NSString *accountName;
@property (nonatomic) long long serverEnvironment;

+ (BOOL)supportsSecureCoding;
+ (void)migratePreBlacktailAccountInformation;
+ (id)authMachineForEnvironment:(long long)a0;
+ (void)migratePreSundanceAccountInformation;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
