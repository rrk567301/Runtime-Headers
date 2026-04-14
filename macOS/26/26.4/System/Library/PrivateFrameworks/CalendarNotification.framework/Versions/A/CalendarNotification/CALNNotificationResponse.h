@class CALNNotification, NSString, BSServiceConnectionEndpoint;

@interface CALNNotificationResponse : NSObject

@property (readonly, nonatomic) CALNNotification *notification;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSString *originIdentifier;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint;

+ (id)responseWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3;

- (BOOL)isEqualToResponse:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3;

@end
