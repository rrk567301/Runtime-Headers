@class NSString, NSUUID;

@interface SCDADevice : NSObject

@property (readonly, nonatomic) unsigned char deviceClass;
@property (readonly, nonatomic) unsigned char productType;
@property (readonly, nonatomic) NSString *deviceClassName;
@property (readonly, nonatomic) NSString *productTypeName;
@property (readonly, nonatomic) char deviceAdjust_DEPRECATED;
@property (readonly, nonatomic) double inEarDelay;
@property (readonly, nonatomic) double inEarInterval;
@property (readonly, nonatomic) double trumpDelay;
@property (readonly, nonatomic) int cdaDeviceClass;
@property (readonly, nonatomic) unsigned char deviceGroup;
@property (readonly, nonatomic) NSUUID *designatedSelfID;

+ (int)cdaDeviceClassForSCDADeviceClass:(unsigned char)a0 andProducType:(unsigned char)a1;
+ (id)debugStringForSCDADeviceClass:(unsigned char)a0 andProductType:(unsigned char)a1;

- (id)description;
- (void).cxx_destruct;
- (unsigned char)_getDeviceClass;
- (unsigned char)_getProductType;
- (id)initWithSelfID:(id)a0;
- (char)_getDeviceAdjust_DEPRECATED;
- (double)_getInEarDelay;
- (double)_getInEarInterval;
- (double)_getTrumpDelay;
- (id)initWithDeviceClass:(unsigned char)a0 deviceClassName:(id)a1 productType:(unsigned char)a2 productTypeName:(id)a3;
- (void)overrideDeviceGroup:(unsigned char)a0;
- (void)overrideLocalConfiguration:(unsigned char)a0 deviceAdjust:(char)a1 trumpDelay:(double)a2;

@end
