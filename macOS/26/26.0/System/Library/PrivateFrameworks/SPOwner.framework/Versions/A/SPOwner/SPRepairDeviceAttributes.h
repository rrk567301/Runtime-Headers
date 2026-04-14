@class NSString, NSUUID, SPHandle, NSURL, NSNumber;

@interface SPRepairDeviceAttributes : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) SPHandle *owner;
@property (copy, nonatomic) NSString *deviceClass;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *rawDeviceModel;
@property (copy, nonatomic) NSString *deviceColor;
@property (copy, nonatomic) NSNumber *thisDevice;
@property (copy, nonatomic) NSNumber *isMine;
@property (copy, nonatomic) NSNumber *isRepairCapable;
@property (nonatomic) long long repairState;
@property (readonly, copy, nonatomic) NSURL *imageBaseUrl;

- (void).cxx_destruct;
- (id)initWithInternalSimpleBeacon:(id)a0;

@end
