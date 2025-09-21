@class NSString, NSArray, NSNumber;

@interface AKDeviceListResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *deviceListVersion;
@property (copy, nonatomic) NSArray *deviceList;
@property (copy, nonatomic) NSArray *deletedDeviceList;
@property (copy, nonatomic) NSString *trustedDeviceHash;
@property (copy, nonatomic) NSString *deletedDeviceHash;
@property (copy, nonatomic) NSNumber *trustedDevicesUpdateTimestamp;
@property (copy, nonatomic) NSString *deletedDevicesCacheExpiryOffset;

+ (id)deviceMapFromResponseBody:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_computeHashForDevices:(id)a0;
- (id)_parseDeletedDevicesFromResponseBody:(id)a0;
- (id)_parseDevicesFromResponseBody:(id)a0;
- (id)deletedDevicesClientHash;
- (id)initWithResponseBody:(id)a0;
- (id)trustedDevicesClientHash;
- (void)updateWithDeviceRestrictionState:(id)a0;

@end
