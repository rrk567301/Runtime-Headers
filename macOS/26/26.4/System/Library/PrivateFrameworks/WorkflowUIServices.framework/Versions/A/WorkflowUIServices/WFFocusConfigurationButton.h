@class NSString;

@interface WFFocusConfigurationButton : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL isDestructive;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 localizedTitle:(id)a1 isDestructive:(BOOL)a2;

@end
