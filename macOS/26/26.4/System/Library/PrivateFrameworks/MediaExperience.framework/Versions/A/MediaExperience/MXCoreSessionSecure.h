@class NSPointerArray, NSLock;

@interface MXCoreSessionSecure : MXCoreSessionBase {
    NSPointerArray *mMXSessionSecureList;
    NSLock *mMXSessionSecureListLock;
}

@property (nonatomic) unsigned int isolatedAudioUseCaseID;

- (id)initWithOptions:(id)a0;
- (int)setPropertyForKey:(id)a0 value:(id)a1;
- (int)copyPropertyForKey:(id)a0 valueOut:(id *)a1;
- (void)dealloc;
- (int)_beginInterruptionWithSecTask:(struct __SecTask { } *)a0 andFlags:(unsigned long long)a1;
- (int)_endInterruptionWithSecTask:(struct __SecTask { } *)a0 andStatus:(id)a1;
- (unsigned long long)addMXSessionSecure:(id)a0;
- (id)copyMXSessionSecureList;
- (void)dumpDebugInfo;
- (id)getIsolatedAudioUseCaseIDAsString;
- (unsigned long long)removeMXSessionSecure:(id)a0;

@end
