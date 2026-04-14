@class NSPointerArray, NSLock;

@interface MXSessionManagerSecure : MXSessionManagerBase {
    NSPointerArray *mMXCoreSessionSecureList;
    NSLock *mMXCoreSessionSecureListLock;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (int)_beginInterruption:(id)a0 withSecTask:(struct __SecTask { } *)a1 andFlags:(unsigned long long)a2;
- (int)_endInterruption:(id)a0 withSecTask:(struct __SecTask { } *)a1 andStatus:(id)a2;
- (unsigned long long)addMXCoreSessionSecure:(id)a0;
- (id)copyMXCoreSessionSecureList;
- (id)copySessionWithAudioSessionID:(unsigned int)a0;
- (void)dumpDebugInfo;
- (BOOL)isSessionWithAudioModeActive:(id)a0;
- (unsigned long long)removeMXCoreSessionSecure:(id)a0;

@end
