@class NSDictionary;

@interface INAppResolverOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) char includeUserActivityTypes;
@property (readonly, nonatomic) char skipSupportedIntentsCheck;

+ (id)optionsWithDictionary:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
