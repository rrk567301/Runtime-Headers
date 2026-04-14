@class NSString;

@interface RTMapServiceOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL useBackgroundTraits;
@property (readonly, nonatomic) NSString *analyticsIdentifier;
@property (readonly, nonatomic) NSString *clientIdentifier;

- (id)initWithUseBackgroundTraits:(BOOL)a0 analyticsIdentifier:(id)a1 clientIdentifier:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUseBackgroundTraits:(BOOL)a0 analyticsIdentifier:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
