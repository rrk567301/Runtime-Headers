@class FSServerInfo;

@interface FSServerInfoTask : FSTask

@property (retain) FSServerInfo *result;

- (void).cxx_destruct;
- (void)didCompleteWithServerInfo:(id)a0;

@end
