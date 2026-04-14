@class NSURL, HDSQLiteDatabase;

@interface HDIDSPersistentDictionary : NSObject {
    Class _objectClass;
    NSURL *_databaseURL;
    HDSQLiteDatabase *_database;
}

- (void)obliterateWithReason:(id)a0 preserveCopy:(BOOL)a1;
- (void)didFinishSending:(id)a0;
- (void)invalidate;
- (void)didReceiveRequest:(id)a0 deviceID:(id)a1 type:(int)a2 length:(long long)a3;
- (void)enumerateObjectsSortedByExpirationDate:(id /* block */)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)messageIDsForPendingOutgoingMessagesWithType:(int)a0 deviceID:(id)a1;
- (void)didReceiveError:(id)a0 forMessageID:(id)a1;
- (void)didSendResponse:(id)a0 toRequest:(id)a1 deviceID:(id)a2 type:(int)a3 length:(long long)a4;
- (id)initWithURL:(id)a0 objectClass:(Class)a1;
- (void)setObject:(id)a0 forKey:(id)a1 expires:(double)a2;
- (id)objectForKey:(id)a0;
- (void)didReceiveResponse:(id)a0 toRequest:(id)a1 deviceID:(id)a2 type:(int)a3 length:(long long)a4;
- (void)didCancel:(id)a0;
- (void)didSendRequest:(id)a0 deviceID:(id)a1 type:(int)a2 length:(long long)a3;
- (void)dealloc;
- (void)removeAllObjects;

@end
