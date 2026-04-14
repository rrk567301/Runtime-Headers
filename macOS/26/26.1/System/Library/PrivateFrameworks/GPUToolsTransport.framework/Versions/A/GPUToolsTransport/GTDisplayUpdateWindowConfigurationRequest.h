@class NSString;

@interface GTDisplayUpdateWindowConfigurationRequest : GTDisplayUpdateRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long orientation;
@property (retain, nonatomic) NSString *windowTitle;
@property (nonatomic) BOOL visible;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
