@interface LeaveMO : WADeviceAnalyticsDatedRecord

@property (nonatomic) double assocDuration;
@property (nonatomic) BOOL isInVoluntary;

+ (id)fetchRequest;
+ (id)unusedSuperEntityProperties;

- (id)attributeDescription:(id)a0;

@end
