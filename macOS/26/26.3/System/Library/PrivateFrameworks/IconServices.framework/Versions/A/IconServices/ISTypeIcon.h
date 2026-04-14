@class NSString;
@protocol ISIconConfiguration;

@interface ISTypeIcon : ISBindableIcon

@property (readonly) NSString *type;
@property (readonly) id<ISIconConfiguration> iconConfig;

+ (BOOL)supportsSecureCoding;

- (id)_fallbackKey;
- (id)makeResourceProvider;
- (id)initWithType:(id)a0 iconConfiguration:(id)a1;
- (id)initWithType:(id)a0;
- (id)symbol;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
