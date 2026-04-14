@interface PosterModel.PosterConfiguredProperties : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ titleStyleConfiguration;
    void /* unknown type, empty encoding */ renderingConfiguration;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
