@class NSString, NSDictionary;

@interface BWAutoFocusROIAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (retain, nonatomic) NSString *portType;
@property (nonatomic) int focusRegionType;
@property (retain, nonatomic) NSDictionary *focusRegion;
@property (nonatomic) int luxLevel;
@property (nonatomic) float subjectDistance;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)eventDictionary;
- (id)eventName;
- (void)dealloc;
- (void)reset;

@end
