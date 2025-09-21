@class NSString, NSUUID;

@interface WADeviceAnalyticsDiagnosticStateRecord : WADeviceAnalyticsDatedRecord

@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *uuid;

+ (id)fetchRequest;

@end
