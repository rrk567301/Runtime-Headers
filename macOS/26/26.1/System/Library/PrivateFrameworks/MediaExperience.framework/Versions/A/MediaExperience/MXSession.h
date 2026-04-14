@class NSString, MXCoreSession, NSRecursiveLock;

@interface MXSession : NSObject <MXSessionProtocol> {
    NSRecursiveLock *mRecursiveLock;
    unsigned long long mCoreSessionID;
    NSString *mDescription;
    unsigned long long mID;
    int mClientType;
    MXCoreSession *mCoreSession;
}

- (void)_dealloc;
- (int)_copyPropertyForKey:(id)a0 valueOut:(id *)a1;
- (id)_setProperties:(id)a0;
- (id)setProperties:(id)a0;
- (int)setPropertyForKeyInternal:(id)a0 value:(id)a1;
- (int)deactivate:(struct __SecTask { } *)a0 resumeOthers:(BOOL)a1 completionHandler:(id /* block */)a2;
- (int)activate:(struct __SecTask { } *)a0 flags:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (int)copyPropertyForKeyInternal:(id)a0 valueOut:(id *)a1;
- (int)setPropertyForKey:(id)a0 value:(id)a1;
- (id)getCoreSession;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 clientType:(unsigned char)a1 remoteDeviceID:(id)a2;
- (void)dealloc;
- (void)dumpInfo;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 clientType:(unsigned char)a1 mxCoreSessionID:(unsigned long long)a2;
- (int)copyPropertyForKey:(id)a0 valueOut:(id *)a1;
- (int)_setPropertyForKey:(id)a0 value:(id)a1;
- (id)_init:(struct { unsigned int x0[8]; })a0 clientType:(unsigned char)a1 mxCoreSessionID:(unsigned long long)a2 remoteDeviceID:(id)a3;
- (unsigned long long)getID;

@end
