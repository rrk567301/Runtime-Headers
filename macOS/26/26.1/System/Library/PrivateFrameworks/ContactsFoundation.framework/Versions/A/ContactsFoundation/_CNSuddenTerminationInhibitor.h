@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor

@property (retain, nonatomic) NSProcessInfo *processInfo;

- (void)start;
- (id)initWithProcessInfo:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (id)init;

@end
