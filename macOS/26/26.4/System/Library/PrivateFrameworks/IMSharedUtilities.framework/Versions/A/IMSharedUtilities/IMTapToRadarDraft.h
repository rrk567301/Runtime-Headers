@class NSString;

@interface IMTapToRadarDraft : NSObject

@property (class, nonatomic, readonly) NSString *notificationUserInfoKey;

+ (void)submitAndOpenTapToRadarWithNotificationIdentifier:(id)a0 notificationTitle:(id)a1 notificationBody:(id)a2 draftTitle:(id)a3 problemDescription:(id)a4 attachments:(id)a5 deviceClasses:(id)a6 classification:(id)a7 reproducibility:(id)a8;

- (id)init;

@end
