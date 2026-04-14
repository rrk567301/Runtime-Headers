@class NSString;

@interface MRHeadphonesRouteDetectorDataSource : NSObject <MRRelevantRouteDetectorDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)relevantRouteDetector:(id)a0 isEndpointRelevant:(id)a1;
- (BOOL)relevantRouteDetector:(id)a0 isOutputDeviceRelevant:(id)a1;

@end
