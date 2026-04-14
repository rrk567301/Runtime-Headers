@class NSString, WADeviceAnalyticsLinkTestRecord;

@interface WADeviceAnalyticsFaultRecord : WADeviceAnalyticsDatedRecord

@property (copy, nonatomic) NSString *interface;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) WADeviceAnalyticsLinkTestRecord *linkTest;

+ (id)fetchRequest;
+ (id)unusedSuperEntityProperties;

@end
