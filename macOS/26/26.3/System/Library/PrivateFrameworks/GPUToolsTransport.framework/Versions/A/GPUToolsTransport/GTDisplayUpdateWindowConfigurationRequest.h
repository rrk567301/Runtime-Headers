@class NSString;

@interface GTDisplayUpdateWindowConfigurationRequest : GTDisplayUpdateRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long orientation;
@property (retain, nonatomic) NSString *windowTitle;
@property (nonatomic) BOOL visible;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
