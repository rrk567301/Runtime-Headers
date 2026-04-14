@class NSData;

@interface SPRawAccessoryMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *productData;
@property (copy, nonatomic) NSData *manufacturerName;
@property (copy, nonatomic) NSData *modelName;
@property (copy, nonatomic) NSData *reserved;
@property (copy, nonatomic) NSData *accessoryCategory;
@property (copy, nonatomic) NSData *accessoryCapabilities;
@property (copy, nonatomic) NSData *firmwareVersion;
@property (copy, nonatomic) NSData *findMyVersion;
@property (copy, nonatomic) NSData *batteryType;
@property (copy, nonatomic) NSData *batteryLevel;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
