@class _PASLock, NSString, NSOrderedSet, BMFrameStore, BMFileManager, BMStreamMetadata, BMStoreConfig;
@protocol BMSegmentManagerDelegate;

@interface BMSegmentManager : NSObject <BMFileManagerDelegate> {
    BMFileManager *_fileManager;
    unsigned long long _permission;
    BMStreamMetadata *_metadata;
    Class _eventDataClass;
    BMStoreConfig *_config;
    id _deviceLockStateRegistration;
    _PASLock *_protectedState;
}

@property (readonly, nonatomic) BOOL isDataAccessible;
@property (nonatomic) BOOL lockingCXReceived;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BMFrameStore *currentFrameStore;
@property (readonly, nonatomic) NSOrderedSet *segmentNames;
@property (readonly, nonatomic) NSString *lastSegmentName;
@property (weak, nonatomic) id<BMSegmentManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)timestampFromSegmentName:(id)a0;
+ (unsigned long long)sizeOfNewFrameStoreInBytesFromNonPagedSize:(unsigned long long)a0 storeLocationOptions:(long long)a1;
+ (id)segmentNameFromTimestamp:(double)a0;
+ (unsigned long long)indexOfSegmentContainingEventTime:(double)a0 fromSegments:(id)a1;

- (id)newFramestoreWithTimestamp:(double)a0 segmentNames:(id)a1 segmentFileHandles:(id)a2;
- (id)fileHandleForFile:(id)a0 error:(id *)a1;
- (BOOL)removeSegmentNamed:(id)a0 reason:(unsigned long long)a1 direction:(unsigned long long)a2;
- (id)segmentContainingTimestamp:(double)a0;
- (void)pruneSegmentsToMaxAge:(double)a0;
- (void)refreshSegmentsList;
- (void)handleDeviceUnlock;
- (id)_segmentAfterFrameStore:(id)a0 orCreateSegmentWithTimestamp:(id)a1 direction:(unsigned long long)a2;
- (void)handleDeviceLockedCX;
- (void).cxx_destruct;
- (void)handleDeviceLockingCX;
- (id)segmentAfterFrameStore:(id)a0 orCreateSegmentWithTimestamp:(double)a1;
- (void)reverseEnumerateSegmentsFrom:(double)a0 to:(double)a1 withBlock:(id /* block */)a2;
- (id)segmentAfterFrameStore:(id)a0 direction:(unsigned long long)a1;
- (long long)cachingOptionsForFileHandleWithAttributes:(id)a0;
- (void)enumerateSegmentsNamesFrom:(double)a0 to:(double)a1 withBlock:(id /* block */)a2;
- (BOOL)shouldCacheFileDescriptors;
- (void)reverseEnumerateSegmentsNamesFrom:(double)a0 to:(double)a1 withBlock:(id /* block */)a2;
- (void)updateSegmentsWithGuardedDeviceLockStateData:(id)a0;
- (id)nextSegmentAfterFrameStore:(id)a0 segmentNames:(id)a1 segmentFileHandles:(id)a2 direction:(unsigned long long)a3;
- (void)_updateSegments;
- (void)handleDeviceLocked;
- (id)segmentWithFilename:(id)a0 segmentNames:(id)a1 segmentFileHandles:(id)a2 error:(id *)a3;
- (id)initWithDirectory:(id)a0 fileManager:(id)a1 permission:(unsigned long long)a2 config:(id)a3;
- (void)enumerateSegmentsFrom:(double)a0 to:(double)a1 withBlock:(id /* block */)a2;
- (void)pruneSegmentsToMaxSizeInBytes:(unsigned long long)a0;
- (id)orderedSegmentsInDirectory:(id)a0 error:(id *)a1;
- (void)handleDeviceLocking;
- (void)cacheFileDescriptorsIfNecessary:(id)a0;
- (BOOL)removeSegmentNamed:(id)a0;
- (id)segmentWithFilename:(id)a0 error:(id *)a1;
- (void)openFiles:(id)a0 saveToOpenFiles:(id)a1;
- (id)lastFrameStoreOrCreateWithTimestamp:(double)a0;
- (void)dealloc;

@end
