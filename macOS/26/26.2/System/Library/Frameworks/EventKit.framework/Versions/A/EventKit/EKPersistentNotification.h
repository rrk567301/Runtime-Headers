@interface EKPersistentNotification : EKPersistentObject

+ (id)relations;

- (id)calendar;
- (void)setExternalModificationTag:(id)a0;
- (int)entityType;
- (id)UUID;
- (void)setUUID:(id)a0;
- (void)setExternalID:(id)a0;
- (id)externalModificationTag;
- (id)externalID;
- (id)hostURL;
- (void)setHostURL:(id)a0;

@end
