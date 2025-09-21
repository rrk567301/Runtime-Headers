@class NSArray;

@interface NCNotificationMutableSystemSettings : NCNotificationSystemSettings

@property (nonatomic, getter=isScheduledDeliveryEnabled) char scheduledDeliveryEnabled;
@property (nonatomic, getter=isScheduledDeliveryUninitialized) char scheduledDeliveryUninitialized;
@property (nonatomic, getter=shouldScheduledDeliveryShowNextSummary) char scheduledDeliveryShowNextSummary;
@property (copy, nonatomic) NSArray *scheduledDeliveryTimes;
@property (nonatomic) long long listDisplayStyleSetting;
@property (nonatomic, getter=areHighlightsEnabled) char highlightsEnabled;

- (void)setHighlightsEnabled:(char)a0;
- (void)setListDisplayStyleSetting:(long long)a0;
- (void)setScheduledDeliveryEnabled:(char)a0;
- (void)setScheduledDeliveryShowNextSummary:(char)a0;
- (void)setScheduledDeliveryTimes:(id)a0;
- (void)setScheduledDeliveryUninitialized:(char)a0;

@end
