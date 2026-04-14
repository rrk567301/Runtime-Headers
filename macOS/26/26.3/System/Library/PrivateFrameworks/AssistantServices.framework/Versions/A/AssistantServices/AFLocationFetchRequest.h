@interface AFLocationFetchRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double desiredAccuracy;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double timeout;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
