@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor

@property (retain, nonatomic) NSProcessInfo *processInfo;

- (void)start;
- (void)stop;
- (id)init;
- (id)initWithProcessInfo:(id)a0;
- (void).cxx_destruct;

@end
