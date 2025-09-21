@class NSMutableArray;

@interface BYUpdateCustomBootObjectsOperation : BYOperation

@property (retain) NSMutableArray *mountedVolumes;

- (void)main;
- (id)initWithRequest:(id)a0;
- (BOOL)required;
- (id)description;
- (void).cxx_destruct;
- (id)_mountVolume:(id)a0;
- (void)cleanUpAfterSuccess:(BOOL)a0;

@end
