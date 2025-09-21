@class NSURL;

@interface MIBundleContainerToken : MIContainerToken

@property (readonly, nonatomic) char hasIdentifiedBundle;
@property (readonly, nonatomic) NSURL *bundleURL;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContainer:(id)a0;

@end
