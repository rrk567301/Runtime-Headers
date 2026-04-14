@class NSString;
@protocol ISIconConfiguration;

@interface ISTypeIcon : ISBindableIcon

@property (readonly) NSString *type;
@property (readonly) id<ISIconConfiguration> iconConfig;

+ (BOOL)supportsSecureCoding;

- (id)_fallbackKey;
- (id)symbol;
- (id)initWithType:(id)a0 iconConfiguration:(id)a1;
- (id)initWithType:(id)a0;
- (id)makeResourceProvider;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
