@interface LFMachPortWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long type;
@property (readonly) unsigned int machPort;

+ (id)machPortWrapperWithMachPort:(unsigned int)a0 ofType:(long long)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMachPort:(unsigned int)a0 ofType:(long long)a1;

@end
