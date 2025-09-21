@interface BWStillImageErrorAnalyticsPayload : BWStillImageAnalyticsPayloadCommon

@property (nonatomic) int error;
@property (nonatomic) float digitalZoomRatioFromSource;

- (void)reset;
- (id)init;
- (id)eventName;
- (id)eventDictionary;

@end
