@class NSDictionary;

@interface ASDViewPresentationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *configuration;
@property (readonly, nonatomic) long long viewIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewIdentifier:(long long)a0;
- (id)initWithViewIdentifier:(long long)a0 configuration:(id)a1;

@end
