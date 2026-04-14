@class NSString;

@interface LSSpotlightAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *unlocalizedTitle;
@property (readonly, nonatomic) NSString *symbolImageName;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_initWithIdentifier:(id)a0 unlocalizedTitle:(id)a1 symbolImageName:(id)a2;
- (BOOL)isEqualToSpotlightAction:(id)a0;

@end
