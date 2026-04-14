@class NSArray, NSDictionary, NSString, NSDate, PLBatteryUIResponderService;

@interface PLBatteryUIResponseTypeUsageTimes : NSObject <PLBatteryUIResponseProtocol>

@property (retain) NSDate *start;
@property (retain) NSDate *end;
@property double bucketSize;
@property (retain) NSArray *aggregateEntries;
@property (retain) NSDictionary *resultDictionary;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dependencies;
- (void)run;
- (void)configure:(id)a0;
- (void).cxx_destruct;
- (id)result;
- (void)coalesce;
- (id)entriesInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 fromEntries:(id)a1;

@end
