@class NSObject;
@protocol OS_os_log;

@interface CNUICoreLogProvider : NSObject

@property (class, readonly) NSObject<OS_os_log> *actions_os_log;
@property (class, readonly) NSObject<OS_os_log> *likenesses_os_log;
@property (class, readonly) NSObject<OS_os_log> *corerecents_os_log;
@property (class, readonly) NSObject<OS_os_log> *static_identity_os_log;
@property (class, readonly) NSObject<OS_os_log> *color_os_log;
@property (class, readonly) NSObject<OS_os_log> *contact_card_os_log;
@property (class, readonly) NSObject<OS_os_log> *posters_os_log;
@property (class, readonly) NSObject<OS_os_log> *photos_os_log;
@property (class, readonly) NSObject<OS_os_log> *memoji_os_log;

@end
