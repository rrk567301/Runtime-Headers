@class NSData;

@interface SPCBPeripheralKeyAddressPair : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *leMACAddress;
@property (readonly, copy, nonatomic) NSData *longTermKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLEMACAddress:(id)a0 longTermKey:(id)a1;

@end
