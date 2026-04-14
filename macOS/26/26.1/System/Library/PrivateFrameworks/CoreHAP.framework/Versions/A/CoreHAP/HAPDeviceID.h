@class NSData, NSString;

@interface HAPDeviceID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *deviceIDString;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithDeviceIDData:(id)a0;
- (id)initWithDeviceIDString:(id)a0;
- (BOOL)isEqualToDeviceID:(id)a0;

@end
