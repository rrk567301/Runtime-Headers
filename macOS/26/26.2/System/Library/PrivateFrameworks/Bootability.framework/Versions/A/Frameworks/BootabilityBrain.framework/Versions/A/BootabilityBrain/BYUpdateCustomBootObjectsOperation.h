@class NSMutableArray;

@interface BYUpdateCustomBootObjectsOperation : BYOperation

@property (retain) NSMutableArray *mountedVolumes;

- (id)initWithRequest:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)description;
- (BOOL)required;
- (id)_mountVolume:(id)a0;
- (void)cleanUpAfterSuccess:(BOOL)a0;

@end
