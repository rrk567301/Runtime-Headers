@interface FSMachPort : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int machPort;

+ (id)newByCopyingPort:(unsigned int)a0;

- (id)initWithPort:(unsigned int)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
