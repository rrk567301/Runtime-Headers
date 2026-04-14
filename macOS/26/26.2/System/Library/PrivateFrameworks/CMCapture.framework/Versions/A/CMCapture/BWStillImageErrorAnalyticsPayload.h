@interface BWStillImageErrorAnalyticsPayload : BWStillImageAnalyticsPayloadCommon

@property (nonatomic) int error;
@property (nonatomic) float digitalZoomRatioFromSource;

- (id)eventDictionary;
- (id)eventName;
- (void)reset;
- (id)init;

@end
