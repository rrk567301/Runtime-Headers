@interface LiveFSMachPort : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int machPort;

+ (id)newByCopyingPort:(unsigned int)a0;

- (id)initWithPort:(unsigned int)a0;
- (void)dealloc;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
