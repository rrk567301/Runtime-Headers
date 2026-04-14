@class NSString, NSDictionary, PLBatteryUIResponderService, NSNumber;

@interface PLBatteryUIResponseTypeLastChargeLevel : NSObject <PLBatteryUIResponseProtocol>

@property (retain) NSNumber *lastChargeValue;
@property (retain) NSNumber *lastChargeTimestamp;
@property (retain) NSDictionary *resultDictionary;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dependencies;
- (void)configure:(id)a0;
- (id)result;
- (void)run;
- (void).cxx_destruct;
- (void)coalesce;

@end
