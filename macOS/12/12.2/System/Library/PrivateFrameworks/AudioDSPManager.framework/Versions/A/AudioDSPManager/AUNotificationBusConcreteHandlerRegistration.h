@class NSString, ADNotificationBus;

@interface AUNotificationBusConcreteHandlerRegistration : NSObject <ADNotificationRegistrationToken>

@property (readonly, weak, nonatomic) ADNotificationBus *owner;
@property (readonly, nonatomic) unsigned int token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithToken:(unsigned int)a0 owner:(id)a1;

@end
