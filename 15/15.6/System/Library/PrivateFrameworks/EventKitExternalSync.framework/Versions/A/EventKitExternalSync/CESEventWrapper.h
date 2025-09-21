@interface CESEventWrapper : CESObjectWrapper

+ (char)keepEventFromServer:(id)a0;

- (id)event;
- (char)save;
- (void)adjustFloatingStartTime:(id *)a0 endTime:(id *)a1 toBeLocalEquivalentTo:(id)a2 originalOffset:(id)a3;
- (char)deleteEKObject;
- (void)fillSyncDict;
- (char)keepFromServer;
- (char)modifyUsingSyncData:(id)a0 record:(id)a1;

@end
