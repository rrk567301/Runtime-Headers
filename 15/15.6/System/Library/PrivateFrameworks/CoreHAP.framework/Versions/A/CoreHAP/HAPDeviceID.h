@class NSData, NSString;

@interface HAPDeviceID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *deviceIDString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceIDData:(id)a0;
- (id)initWithDeviceIDString:(id)a0;
- (char)isEqualToDeviceID:(id)a0;

@end
