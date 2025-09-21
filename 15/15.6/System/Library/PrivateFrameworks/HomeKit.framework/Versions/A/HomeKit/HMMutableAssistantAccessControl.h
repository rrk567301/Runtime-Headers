@class NSArray;

@interface HMMutableAssistantAccessControl : HMAssistantAccessControl

@property (getter=isEnabled) char enabled;
@property char allowUnauthenticatedRequests;
@property (getter=areActivityNotificationsEnabledForPersonalRequests) char activityNotificationsEnabledForPersonalRequests;
@property (copy) NSArray *accessories;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)a0;
- (void)removeAccessory:(id)a0;
- (void)addAccessory:(id)a0;

@end
