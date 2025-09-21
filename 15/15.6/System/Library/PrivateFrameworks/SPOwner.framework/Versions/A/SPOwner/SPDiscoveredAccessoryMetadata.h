@class NSData, NSString, SPRawAccessoryMetadata;

@interface SPDiscoveredAccessoryMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *productData;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSString *findMyVersion;
@property (copy, nonatomic) NSString *protocolVersion;
@property (nonatomic) unsigned long long accessoryCategory;
@property (nonatomic) unsigned int accessoryCapabilities;
@property (nonatomic) unsigned char batteryType;
@property (nonatomic) unsigned char batteryState;
@property (nonatomic) unsigned long long capabilities;
@property (copy, nonatomic) SPRawAccessoryMetadata *rawMetadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
