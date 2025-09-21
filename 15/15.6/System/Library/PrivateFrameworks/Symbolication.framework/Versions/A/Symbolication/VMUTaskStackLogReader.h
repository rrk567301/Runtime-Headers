@class NSSet, NSString, VMUVMRegionTracker, VMUTaskMemoryScanner;

@interface VMUTaskStackLogReader : VMUStackLogReaderBase <VMUStackLogReader> {
    unsigned long long _msl_payload_version;
}

@property (weak, nonatomic) VMUTaskMemoryScanner *scanner;
@property (readonly) unsigned int task;
@property (readonly) char is64bit;
@property (readonly) char inspectingLiveProcess;
@property (readonly) char usesLiteMode;
@property (readonly) char usesCoreFile;
@property (readonly) char coldestFrameIsNotThreadId;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (readonly) struct _CSTypeRef { unsigned long long x0; unsigned long long x1; } symbolicator;
@property (retain, nonatomic) NSSet *excludedFrames;
@property (readonly) unsigned long long nodesInUniquingTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
