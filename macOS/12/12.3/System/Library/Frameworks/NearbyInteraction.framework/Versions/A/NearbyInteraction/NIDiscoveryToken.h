@class NSData, NSNumber;

@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_shortDeviceAddress;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *rawToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBytes:(id)a0;
- (id)descriptionInternal;
- (id)initWithDeviceAddress:(unsigned short)a0;
- (id)shortDeviceAddress;

@end
