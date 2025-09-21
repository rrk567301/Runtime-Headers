@class NSString, BCSUserDefaults;

@interface BCSPIRServerEnvironment : NSObject <BCSPIRServerEnvironmentProtocol>

@property (nonatomic) long long type;
@property (nonatomic) long long serverType;
@property (nonatomic) char isInternalInstall;
@property (retain, nonatomic) BCSUserDefaults *userDefaults;
@property (readonly, nonatomic) NSString *pirUseCase;
@property (readonly, nonatomic) char pirUsesCompression;
@property (readonly, nonatomic) NSString *secondaryIdentifier;

- (void).cxx_destruct;
- (char)_boolFromDefaultsForKey:(id)a0 defaultValue:(char)a1;
- (id)_stringFromDefaultsForKey:(id)a0 defaultValue:(id)a1;
- (id)initWithUserDefaults:(id)a0 isInternalInstall:(char)a1 type:(long long)a2 serverType:(long long)a3;

@end
