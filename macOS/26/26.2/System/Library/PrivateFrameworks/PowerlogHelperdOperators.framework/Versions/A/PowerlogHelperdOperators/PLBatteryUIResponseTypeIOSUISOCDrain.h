@class NSArray, NSString, PLBatteryUIResponderService, NSDate;

@interface PLBatteryUIResponseTypeIOSUISOCDrain : NSObject <PLBatteryUIResponseProtocol>

@property (retain) NSDate *start;
@property (retain) NSDate *end;
@property double bucketSize;
@property (retain) NSArray *uiLevelEntries;
@property BOOL isDynamicEnd;
@property double dynamicEndOffset;
@property (retain) NSArray *resultArray;
@property (retain) NSArray *dynamicResultArray;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure:(id)a0;
- (void)run;
- (void).cxx_destruct;
- (id)dependencies;
- (id)result;
- (void)coalesce;

@end
