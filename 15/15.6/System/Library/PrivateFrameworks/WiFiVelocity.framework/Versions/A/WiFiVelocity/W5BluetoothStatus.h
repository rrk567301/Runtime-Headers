@class NSString, NSArray;

@interface W5BluetoothStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char powerOn;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) char isDiscoverable;
@property (nonatomic) char isConnectable;
@property (nonatomic) char isScanning;
@property (copy, nonatomic) NSArray *devices;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToBluetoothStatus:(id)a0;

@end
