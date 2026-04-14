@interface EKPersistentNotification : EKPersistentObject

+ (id)relations;

- (id)calendar;
- (void)setExternalModificationTag:(id)a0;
- (void)setExternalID:(id)a0;
- (id)UUID;
- (void)setUUID:(id)a0;
- (id)externalID;
- (id)externalModificationTag;
- (int)entityType;
- (id)hostURL;
- (void)setHostURL:(id)a0;

@end
