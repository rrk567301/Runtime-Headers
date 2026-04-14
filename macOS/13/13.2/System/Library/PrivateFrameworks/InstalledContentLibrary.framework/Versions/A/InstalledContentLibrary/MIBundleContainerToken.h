@class NSURL;

@interface MIBundleContainerToken : MIContainerToken

@property (readonly, nonatomic) BOOL hasIdentifiedBundle;
@property (readonly, nonatomic) NSURL *bundleURL;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
