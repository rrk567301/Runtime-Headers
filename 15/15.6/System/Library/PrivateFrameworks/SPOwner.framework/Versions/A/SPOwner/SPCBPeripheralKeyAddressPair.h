@class NSData;

@interface SPCBPeripheralKeyAddressPair : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *leMACAddress;
@property (readonly, copy, nonatomic) NSData *longTermKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLEMACAddress:(id)a0 longTermKey:(id)a1;

@end
