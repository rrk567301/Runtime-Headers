@class NSURL, NSString, NSMutableSet;

@interface SMCopyEngineNopCopier : SMCopyEngineFileCopier

@property char fileCopyingMode;
@property (retain, nonatomic) NSURL *destinationSandboxURL;
@property (retain, nonatomic) NSString *sourceRelativePath;
@property (retain, nonatomic) NSURL *finalDestinationURL;
@property (retain, nonatomic) NSMutableSet *failedRelativePaths;
@property char skipPreflight;
@property char sourceIsTimeMachine;
@property char overwriteDestination;
@property char supportResumption;

- (id)init;
- (void).cxx_destruct;
- (char)doOperation:(unsigned int)a0 from:(id)a1 to:(id)a2 error:(id *)a3;
- (id)initWithCopyEngine:(id)a0;
- (char)processReturningError:(id *)a0;
- (void)removeDestinationSandbox;
- (char)shouldSkipFileAtPath:(id)a0;

@end
