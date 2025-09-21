@class NSString;

@interface LSSpotlightAction : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *unlocalizedTitle;
@property (readonly, nonatomic) NSString *symbolImageName;

+ (id)new;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithIdentifier:(id)a0 unlocalizedTitle:(id)a1 symbolImageName:(id)a2;
- (char)isEqualToSpotlightAction:(id)a0;

@end
