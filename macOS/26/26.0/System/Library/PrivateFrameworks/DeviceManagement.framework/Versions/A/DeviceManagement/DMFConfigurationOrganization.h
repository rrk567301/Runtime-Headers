@class NSString, NSArray;

@interface DMFConfigurationOrganization : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL active;
@property (copy, nonatomic) NSArray *registeredConfigurationSources;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
