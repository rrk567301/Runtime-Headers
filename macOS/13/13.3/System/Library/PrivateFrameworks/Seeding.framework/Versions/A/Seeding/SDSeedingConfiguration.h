@class NSString, NSDictionary;

@interface SDSeedingConfiguration : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) SDSeedingConfiguration *nullConfiguration;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long seedProgram;
@property (retain, nonatomic) NSString *assetAudience;
@property (retain, nonatomic) NSString *catalog;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)currentConfiguration;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithBetaProgram:(id)a0;

@end
