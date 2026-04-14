@class NSString;
@protocol ISIconConfiguration;

@interface ISTypeIcon : ISBindableIcon

@property (readonly) NSString *type;
@property (readonly) id<ISIconConfiguration> iconConfig;

+ (BOOL)supportsSecureCoding;

- (id)makeResourceProvider;
- (id)_fallbackKey;
- (id)symbol;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(id)a0 iconConfiguration:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
