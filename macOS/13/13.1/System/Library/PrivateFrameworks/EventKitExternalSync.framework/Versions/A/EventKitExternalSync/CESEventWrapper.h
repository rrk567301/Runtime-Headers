@interface CESEventWrapper : CESObjectWrapper

+ (BOOL)keepEventFromServer:(id)a0;

- (id)event;
- (BOOL)save;
- (void)fillSyncDict;
- (BOOL)modifyUsingSyncData:(id)a0 record:(id)a1;
- (BOOL)deleteEKObject;
- (BOOL)keepFromServer;
- (void)adjustFloatingStartTime:(id *)a0 endTime:(id *)a1 toBeLocalEquivalentTo:(id)a2 originalOffset:(id)a3;

@end
