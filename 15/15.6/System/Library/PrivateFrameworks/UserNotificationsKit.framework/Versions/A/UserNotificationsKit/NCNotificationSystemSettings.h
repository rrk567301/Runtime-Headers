@class NSArray, NSString;

@interface NCNotificationSystemSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=isScheduledDeliveryEnabled) char scheduledDeliveryEnabled;
@property (readonly, nonatomic, getter=isScheduledDeliveryUninitialized) char scheduledDeliveryUninitialized;
@property (readonly, nonatomic, getter=shouldScheduledDeliveryShowNextSummary) char scheduledDeliveryShowNextSummary;
@property (readonly, copy, nonatomic) NSArray *scheduledDeliveryTimes;
@property (readonly, nonatomic) long long listDisplayStyleSetting;
@property (readonly, nonatomic, getter=areHighlightsEnabled) char highlightsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForNotificationListDisplayStyleSetting:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithNotificationSystemSettings:(id)a0;

@end
