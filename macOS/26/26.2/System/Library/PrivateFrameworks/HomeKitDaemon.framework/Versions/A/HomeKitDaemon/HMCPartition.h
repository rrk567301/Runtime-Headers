@class HMCRedirector;

@interface HMCPartition : HMFObject

@property (readonly) HMCRedirector *redirections;

- (void).cxx_destruct;
- (BOOL)modelBelongsToThisPartition:(id)a0;
- (id)init;

@end
