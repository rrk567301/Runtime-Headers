@class NSDate;

@interface PLTimeReferenceKernel : PLTimeReference

@property (retain) NSDate *lastSystemTimeRecalibrated;
@property (retain) NSDate *lastKernelTimeRecalibrated;
@property BOOL rebootOccurred;

- (void)initializeOffsetWithEntries:(id)a0;
- (id)currentTime;
- (void)setSystemReboot:(BOOL)a0;
- (void)quarantineWithExitReason:(short)a0;
- (struct mach_timebase_info { unsigned int x0; unsigned int x1; } *)getTimebaseInfo;
- (unsigned long long)continuousTimeToAbsoluteNs:(unsigned long long)a0;
- (double)resolution;
- (void).cxx_destruct;

@end
