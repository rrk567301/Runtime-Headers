@class NSData, NSNumber;

@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_shortDeviceAddress;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSData *rawToken;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBytes:(id)a0;
- (id)initWithDeviceAddress:(unsigned short)a0;
- (id)shortDeviceAddress;
- (id)descriptionInternal;

@end
