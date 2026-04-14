@class NSDictionary;

@interface DMFFetchAppsResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *appsByBundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAppsByBundleIdentifier:(id)a0;

@end
