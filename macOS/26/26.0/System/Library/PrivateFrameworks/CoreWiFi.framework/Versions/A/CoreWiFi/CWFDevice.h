@class NSString;

@interface CWFDevice : NSObject

@property (retain, nonatomic) NSString *deviceRapportEffectiveIdentifier;
@property (copy, nonatomic) NSString *macAddress;
@property (copy, nonatomic) NSString *ipAddress;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *productMarketingName;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSString *productColor;
@property (nonatomic) unsigned long long retryCount;

- (id)initWithUserInfo:(id)a0;
- (id)userInfo;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasFetchedDeviceInfo;
- (id)initWithRapportDevice:(id)a0;

@end
