@class BSSMO;

@interface WADeviceAnalyticsScanRecord : WADeviceAnalyticsDatedRecord

@property (nonatomic) short band;
@property (nonatomic) short channel;
@property (nonatomic) short originRssi;
@property (nonatomic) short resultRssi;
@property (retain, nonatomic) BSSMO *origin;
@property (retain, nonatomic) BSSMO *result;

+ (id)fetchRequest;
+ (BOOL)getSsidAndBssidWithinRangeForColocatedScopeTransition:(id)a0 bssid:(id)a1 minRssi:(int)a2 maxRssi:(int)a3 band:(unsigned int)a4 transitionSsid:(id *)a5 transitionBssid:(id *)a6 transitionRssi:(int *)a7 authFlags:(id *)a8 container:(id)a9;

@end
