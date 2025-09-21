@class HMCRedirector;

@interface HMCPartition : HMFObject

@property (readonly) HMCRedirector *redirections;

- (id)init;
- (void).cxx_destruct;
- (char)modelBelongsToThisPartition:(id)a0;

@end
