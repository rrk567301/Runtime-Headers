@class NSString;

@interface RTMapServiceOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char useBackgroundTraits;
@property (readonly, nonatomic) NSString *analyticsIdentifier;
@property (readonly, nonatomic) NSString *clientIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUseBackgroundTraits:(char)a0 analyticsIdentifier:(id)a1;
- (id)initWithUseBackgroundTraits:(char)a0 analyticsIdentifier:(id)a1 clientIdentifier:(id)a2;

@end
