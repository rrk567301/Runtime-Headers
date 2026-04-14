@interface PKSharingChannelDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_initWithType:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
