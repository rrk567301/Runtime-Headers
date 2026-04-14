@class NSString, NSDictionary, _TtC22HealthDaemonFoundation49HDUserNotificationSystemApertureContentDefinition;

@interface HDUserNotification : NSObject {
    struct __CFUserNotification { } *_notification;
}

@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *defaultButton;
@property (copy, nonatomic) NSString *cancelButton;
@property (copy, nonatomic) NSString *otherButton;
@property (copy, nonatomic) NSDictionary *additionalDescriptors;
@property (copy, nonatomic) _TtC22HealthDaemonFoundation49HDUserNotificationSystemApertureContentDefinition *contentDefinition;
@property (nonatomic) long long alertLevel;
@property (nonatomic) unsigned long long userNotificationOptions;

- (void)setNotification:(struct __CFUserNotification { } *)a0;
- (struct __CFUserNotification { } *)notification;
- (void).cxx_destruct;
- (void)dealloc;
- (void)presentWithResponseHandler:(id /* block */)a0;
- (void)_handleResponse:(unsigned long long)a0;

@end
