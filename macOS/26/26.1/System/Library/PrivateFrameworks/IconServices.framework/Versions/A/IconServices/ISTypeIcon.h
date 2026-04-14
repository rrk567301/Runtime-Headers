@class NSString;
@protocol ISIconConfiguration;

@interface ISTypeIcon : ISBindableIcon

@property (readonly) NSString *type;
@property (readonly) id<ISIconConfiguration> iconConfig;

+ (BOOL)supportsSecureCoding;

- (id)symbol;
- (id)_fallbackKey;
- (id)initWithType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(id)a0 iconConfiguration:(id)a1;
- (id)description;
- (id)makeResourceProvider;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
