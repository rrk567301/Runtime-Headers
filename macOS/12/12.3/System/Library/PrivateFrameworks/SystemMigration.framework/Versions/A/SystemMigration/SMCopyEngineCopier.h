@class SMPathSizer, SMCopyEngine, NSProgress, NSMutableSet, NSDate, NSURL, NSString;

@interface SMCopyEngineCopier : NSObject

@property unsigned long long lastSizeUpdate;
@property unsigned long long accumulatedBytesCopied;
@property unsigned long long lastDeltaSinceAccumulatedBytesUpdated;
@property (retain) SMPathSizer *pathSizer;
@property (retain) NSMutableSet *hardlinkInodes;
@property BOOL isParentExpectingProgress;
@property double transferRate;
@property (retain) NSDate *startTime;
@property (weak) SMCopyEngine *engine;
@property (readonly) NSURL *sourcePath;
@property (retain) NSURL *relativeSourcePath;
@property (readonly) NSURL *destinationPath;
@property (retain) NSURL *relativeDestinationPath;
@property (readonly) NSURL *sandboxedDestinationPath;
@property (readonly) NSURL *destinationPathConsideringSandbox;
@property unsigned long long copySize;
@property unsigned long long copyFileCount;
@property (retain) NSProgress *parentProgress;
@property double parentProgressPendingUnits;
@property (retain) NSProgress *progress;
@property BOOL repeatCopyIfCompleted;
@property (retain) id associatedObject;
@property (retain) NSString *progressString;
@property (retain) NSString *errorString;
@property BOOL tracksCompletedPaths;

+ (id)keyPathsForValuesAffectingSourceURL;
+ (id)keyPathsForValuesAffectingDestinationPath;
+ (id)keyPathsForValuesAffectingSandboxedDestinationPath;

- (BOOL)run;
- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldContinue;
- (id)initWithCopyEngine:(id)a0;
- (BOOL)processReturningError:(id *)a0;
- (void)setCopySize:(unsigned long long)a0 andCount:(unsigned long long)a1;
- (void)sizeCompletedUpdate:(unsigned long long)a0;
- (void)finishedFileAtPath:(id)a0;
- (BOOL)preProcessReturningError:(id *)a0;
- (BOOL)postProcessReturningError:(id *)a0;
- (BOOL)finallyWithErrorOccured:(BOOL)a0;
- (void)finishedFileAtCPath:(const char *)a0;

@end
