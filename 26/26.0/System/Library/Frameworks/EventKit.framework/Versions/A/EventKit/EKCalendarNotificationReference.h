@class EKCalendarNotification, EKEventStore, NSDate, EKObjectID;

@interface EKCalendarNotificationReference : NSObject {
    EKCalendarNotification *_notification;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) EKCalendarNotification *notification;
@property (readonly, nonatomic) EKObjectID *objectID;
@property (readonly, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) NSDate *date;

+ (id)batchLoadNotifications:(id)a0;
+ (id)batchLoadTypeForRelationsOfObjectType:(int)a0;
+ (id)requiredPropertiesForBatchLoadType:(int)a0;

- (BOOL)loaded;
- (id)description;
- (void).cxx_destruct;
- (id)_notification;
- (long long)_notificationTypeForResourceChange:(id)a0 notificationType:(int)a1;
- (int)batchLoadType;
- (id)initWithType:(int)a0 objectID:(id)a1 date:(id)a2 eventStore:(id)a3;
- (id)initWithType:(int)a0 objectID:(id)a1 eventStore:(id)a2;

@end
