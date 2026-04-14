@class NSString;

@interface WFSiriOpenAppRequest : WFSiriActionRequest

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
