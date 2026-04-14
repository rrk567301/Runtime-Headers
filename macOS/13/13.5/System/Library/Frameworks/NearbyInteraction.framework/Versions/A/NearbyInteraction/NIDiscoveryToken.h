@class NSData, NSNumber;

@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_shortDeviceAddress;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSData *rawToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBytes:(id)a0;
- (id)initWithDeviceAddress:(unsigned short)a0;
- (id)descriptionInternal;
- (id)shortDeviceAddress;

@end
