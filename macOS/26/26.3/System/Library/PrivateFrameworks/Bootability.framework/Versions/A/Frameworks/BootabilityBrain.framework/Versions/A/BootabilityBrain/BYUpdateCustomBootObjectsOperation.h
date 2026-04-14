@class NSMutableArray;

@interface BYUpdateCustomBootObjectsOperation : BYOperation

@property (retain) NSMutableArray *mountedVolumes;

- (id)initWithRequest:(id)a0;
- (id)description;
- (void)main;
- (BOOL)required;
- (void).cxx_destruct;
- (id)_mountVolume:(id)a0;
- (void)cleanUpAfterSuccess:(BOOL)a0;

@end
