@interface EKPersistentNotification : EKPersistentObject

+ (id)relations;

- (id)calendar;
- (id)externalModificationTag;
- (void)setExternalID:(id)a0;
- (id)externalID;
- (int)entityType;
- (void)setExternalModificationTag:(id)a0;
- (void)setUUID:(id)a0;
- (id)UUID;
- (id)hostURL;
- (void)setHostURL:(id)a0;

@end
