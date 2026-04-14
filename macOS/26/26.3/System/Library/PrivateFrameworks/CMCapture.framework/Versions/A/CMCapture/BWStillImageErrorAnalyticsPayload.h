@interface BWStillImageErrorAnalyticsPayload : BWStillImageAnalyticsPayloadCommon

@property (nonatomic) int error;
@property (nonatomic) float digitalZoomRatioFromSource;

- (id)init;
- (id)eventDictionary;
- (id)eventName;
- (void)reset;

@end
