@class NSString, NSArray;

@interface PHProjectInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long creationSource;
@property (readonly, nonatomic) NSString *projectType;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) char brandingEnabled;
@property (readonly, nonatomic) char pageNumbersEnabled;
@property (readonly, nonatomic) NSString *productIdentifier;
@property (readonly, nonatomic) NSString *themeIdentifier;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description:(char)a0;
- (id)initWithProjectType:(id)a0 sections:(id)a1 creationSource:(long long)a2;
- (id)initWithProjectType:(id)a0 sections:(id)a1 creationSource:(long long)a2 brandingEnabled:(char)a3 pageNumbersEnabled:(char)a4 productIdentifier:(id)a5 themeIdentifier:(id)a6;

@end
