@class ISResourceProvider;

@interface ISTransparentIcon : ISConcreteIcon {
    ISResourceProvider *_resourceProvider;
}

+ (id)sharedInstance;
+ (char)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)makeResourceProvider;

@end
