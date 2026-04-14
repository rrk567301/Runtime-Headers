@class HMCRedirector;

@interface HMCPartition : HMFObject

@property (readonly) HMCRedirector *redirections;

- (id)init;
- (BOOL)modelBelongsToThisPartition:(id)a0;
- (void).cxx_destruct;

@end
