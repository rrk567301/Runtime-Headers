@class NSString, GTMTLReplayActivity, NSObject;
@protocol OS_os_log;

@interface GTMTLReplayActivityLog : NSObject {
    NSObject<OS_os_log> *_log;
    GTMTLReplayActivity *_lastBreadcrumb;
    GTMTLReplayActivity *_lastActivity;
    BOOL _retainActivityLog;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSString *gputracePath;

- (id)description;
- (id)init:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithLog:(id)a0;
- (void)enterActivity:(id)a0;
- (void)enterArgumentBufferDownload;
- (void)enterArgumentBufferUpload;
- (void)enterCollectCounters:(id)a0 statLocations:(unsigned long long)a1 withIndex:(unsigned long long)a2;
- (void)enterDebugFuncStopFromIndex:(struct { unsigned int x0; unsigned int x1; })a0 toIndex:(struct { unsigned int x0; unsigned int x1; })a1;
- (void)enterDisplayAttachmentAtIndex:(struct { unsigned int x0; unsigned int x1; })a0;
- (void)enterHarvestResourceObjectWithAttributes:(id)a0;
- (void)enterLoadArchiveWithPath:(id)a0;
- (void)enterMessage:(id)a0;
- (void)enterOptimizeRestores;
- (void)enterPerformFrameTimingForIndex:(int)a0;
- (void)enterRestoreCommandBufferAtIndex:(unsigned int)a0;
- (void)enterRestoreResources:(const struct GTResourceRestoreRequest { unsigned long long x0; unsigned long long x1; unsigned long long x2; char *x3; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { struct GTMTLTensorSlice { struct GTMTLTensorExtents { unsigned long long x0; unsigned long long x1[16]; } x0; struct GTMTLTensorExtents { unsigned long long x0; unsigned long long x1[16]; } x1; } x0; struct GTMTLTensorExtents { unsigned long long x0; unsigned long long x1[16]; } x1; unsigned char x2; char x3[7]; } x1; struct { unsigned short x0; unsigned short x1; unsigned short x2[3]; unsigned short x3[3]; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; unsigned char x8; unsigned char x9; } x2; struct { unsigned int x0; unsigned int x1; } x3; struct { unsigned long long x0; unsigned long long *x1; unsigned int x2; char x3[4]; } x4; } x4; } *)a0 count:(int)a1;
- (void)enterRewind;
- (id)getBreadcrumbSummary;
- (id)getBreadcrumbsAsJSON;
- (void)leaveActivity;
- (void)logActivitiesToFile:(id)a0;
- (void)logCommandBuffer:(id)a0 atIndex:(unsigned int)a1;
- (void)logCommandBuffer:(id)a0 withKey:(unsigned long long)a1;
- (void)logMTL4Queue:(id)a0 commit:(id)a1 options:(id)a2 atIndex:(unsigned int)a3;
- (void)logMTL4Queue:(id)a0 commit:(id)a1 options:(id)a2 withKeys:(id)a3;
- (void)logSharedCommandBuffer:(id)a0;

@end
