@class NSString;

@interface PFCloudKitBaseMetric : NSObject <PFCoreAnalyticsMetric> {
    NSString *_containerIdentifier;
    NSString *_processName;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
