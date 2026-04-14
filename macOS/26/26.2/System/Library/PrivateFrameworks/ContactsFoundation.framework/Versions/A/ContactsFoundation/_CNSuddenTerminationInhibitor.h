@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor

@property (retain, nonatomic) NSProcessInfo *processInfo;

- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (id)init;
- (id)initWithProcessInfo:(id)a0;

@end
