@class NSMutableDictionary;

@interface PXDiagnosticsNotificationCenter : NSObject {
    long long _nextReplyID;
    NSMutableDictionary *_pendingReplyHandles;
}

- (void).cxx_destruct;
- (id)init;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1 resultHandler:(id /* block */)a2;
- (void)_didReplyToIDNumber:(long long)a0;

@end
