@class WADeviceAnalyticsLinkTestRecord, NSString, NetworkMO, LANMO, BSSMO;

@interface WADeviceAnalyticsFaultRecord : WADeviceAnalyticsDatedRecord

@property (copy, nonatomic) NSString *interface;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) BSSMO *bss;
@property (retain, nonatomic) LANMO *lan;
@property (retain, nonatomic) WADeviceAnalyticsLinkTestRecord *linkTest;
@property (retain, nonatomic) NetworkMO *network;

+ (id)fetchRequest;

@end
