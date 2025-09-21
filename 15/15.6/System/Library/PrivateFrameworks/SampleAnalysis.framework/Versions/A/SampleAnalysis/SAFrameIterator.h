@class SAExclaveFrame, NSArray, SASharedCache, NSMutableDictionary, NSString, SAFrame;

@interface SAFrameIterator : NSObject <SAFrameIterator> {
    SAFrame *_frame;
    SAExclaveFrame *_exclaveFrame;
}

@property unsigned long long backtracer;
@property char assumeUserBinaryLoadInfosContainMainBinary;
@property (retain) NSArray *userBinaryLoadInfos;
@property (retain) NSArray *kernelBinaryLoadInfos;
@property (retain) SASharedCache *sharedCache;
@property unsigned long long *userFrames;
@property unsigned int numUserFrames;
@property char isUserStackTruncated;
@property unsigned long long *swiftAsyncFrames;
@property unsigned int numSwiftAsyncFrames;
@property unsigned int swiftAsyncStitchIndex;
@property char isSwiftAsyncStackTruncated;
@property unsigned long long *kernelFrames;
@property unsigned int numKernelFrames;
@property unsigned long long continuation;
@property unsigned int exclaveInsertionIndex;
@property char isKernelStackTruncated;
@property (retain) NSMutableDictionary *addressTranslations;
@property char checkLR;
@property void *aotSession;
@property (retain) NSArray *aotInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)clearThreadData;
- (void)clearTaskData;
- (char)hasKernelStack;
- (char)hasStack;
- (char)hasSwiftAsyncStack;
- (char)hasUserStack;
- (void)iterateFramesWithBacktraceStyle:(unsigned long long)a0 block:(id /* block */)a1;

@end
