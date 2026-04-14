@class NSDate;

@interface PLTimeReferenceKernel : PLTimeReference

@property (retain) NSDate *lastSystemTimeRecalibrated;
@property (retain) NSDate *lastKernelTimeRecalibrated;
@property BOOL rebootOccurred;

- (void).cxx_destruct;
- (id)currentTime;
- (double)resolution;
- (void)initializeOffsetWithEntries:(id)a0;
- (struct mach_timebase_info { unsigned int x0; unsigned int x1; } *)getTimebaseInfo;
- (void)setSystemReboot:(BOOL)a0;
- (unsigned long long)continuousTimeToAbsoluteNs:(unsigned long long)a0;

@end
