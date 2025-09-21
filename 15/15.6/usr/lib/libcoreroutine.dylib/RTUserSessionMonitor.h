@interface RTUserSessionMonitor : RTNotifier

@property (nonatomic) char previouslyActiveUser;
@property (readonly, getter=activeUser) char activeUser;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)supportsNotificationName:(id)a0;

- (id)init;
- (unsigned int)uid;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;

@end
