@class CESCalStoreSource, NSString, NSMutableDictionary, CESEntityWrapper, EKObject;

@interface CESObjectWrapper : NSObject {
    NSMutableDictionary *_syncData;
    NSString *_initialID;
}

@property (readonly) CESEntityWrapper *entity;
@property (readonly) EKObject *ekObject;
@property char isNew;
@property (readonly) CESCalStoreSource *store;
@property (readonly) NSString *recordID;
@property (readonly) NSMutableDictionary *syncData;

+ (id)wrapping:(id)a0 ofType:(id)a1;

- (void).cxx_destruct;
- (char)save;
- (char)commit:(id *)a0;
- (char)deleteEKObject;
- (void)fillSyncDict;
- (id)initOnObject:(id)a0 ofType:(id)a1;
- (char)keepFromServer;
- (char)modifyUsingSyncData:(id)a0;
- (char)modifyUsingSyncData:(id)a0 record:(id)a1;

@end
