@interface EKPersistentNotification : EKPersistentObject

+ (id)relations;

- (id)UUID;
- (void)setUUID:(id)a0;
- (void)setExternalModificationTag:(id)a0;
- (id)externalModificationTag;
- (int)entityType;
- (id)externalID;
- (id)calendar;
- (void)setExternalID:(id)a0;
- (id)hostURL;
- (void)setHostURL:(id)a0;

@end
