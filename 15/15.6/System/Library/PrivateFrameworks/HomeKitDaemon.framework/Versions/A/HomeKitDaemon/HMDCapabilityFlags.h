@class NSData;

@interface HMDCapabilityFlags : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSData *bytesData;

+ (id)shortDescription;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithCapabilities:(id)a0;
- (char)hasCapabilities:(id)a0;
- (id)initWithCapabilityOptions:(unsigned long long)a0;

@end
