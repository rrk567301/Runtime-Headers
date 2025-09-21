@class CFPDSource;

@interface CFPDMirroredSource : CFPDSource {
    struct __CFSet { } *_mirroredKeys;
    CFPDSource *_mirrorSource;
}

- (void)dealloc;
- (id /* block */)createDiskWrite;
- (id)acceptMessage:(id)a0;
- (int)cacheFileInfoForWriting:(char)a0 euid:(unsigned int)a1 egid:(unsigned int)a2 didCreate:(char *)a3;
- (void)clearCacheForReason:(struct __CFString { } *)a0;
- (void)drainPendingChanges;
- (char)enqueueNewKey:(id)a0 value:(id)a1 encoding:(int)a2 inBatch:(char)a3 fromMessage:(id)a4;
- (void)handleWritingResult:(struct __CFDictionary { } *)a0;
- (id)initWithDomain:(struct __CFString { } *)a0 userName:(struct __CFString { } *)a1 byHost:(char)a2 managed:(char)a3 mirroredKeys:(struct __CFArray { } *)a4 shmemIndex:(short)a5 daemon:(id)a6;
- (void)lock;
- (void)unlock;

@end
