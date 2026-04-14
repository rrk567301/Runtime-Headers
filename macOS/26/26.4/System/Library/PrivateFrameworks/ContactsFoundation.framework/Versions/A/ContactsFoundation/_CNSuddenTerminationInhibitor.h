@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor

@property (retain, nonatomic) NSProcessInfo *processInfo;

- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (id)initWithProcessInfo:(id)a0;

@end
