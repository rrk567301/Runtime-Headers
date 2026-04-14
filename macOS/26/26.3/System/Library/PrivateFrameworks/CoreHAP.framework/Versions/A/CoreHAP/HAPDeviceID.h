@class NSData, NSString;

@interface HAPDeviceID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *deviceIDString;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDeviceIDData:(id)a0;
- (id)initWithDeviceIDString:(id)a0;
- (BOOL)isEqualToDeviceID:(id)a0;

@end
