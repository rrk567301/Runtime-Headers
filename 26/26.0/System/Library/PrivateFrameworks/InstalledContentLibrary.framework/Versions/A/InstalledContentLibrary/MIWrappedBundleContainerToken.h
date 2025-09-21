@class NSURL;

@interface MIWrappedBundleContainerToken : MIBundleContainerToken

@property (readonly, nonatomic) NSURL *wrapperURL;

- (id)initWithContainer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
