@interface GTMTLResourceUsageItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long kind;
@property unsigned char usage;
@property unsigned char stage;
@property unsigned long long resourceID;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
