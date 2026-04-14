@interface PGResource : NSObject

@property (nonatomic) BOOL isGuestValid;
@property (nonatomic) BOOL isHostValid;
@property (readonly, nonatomic) BOOL supportsSynchronize;
@property (readonly, nonatomic) BOOL supportsDiscard;
@property (readonly, nonatomic) BOOL needsComputePaging;
@property (readonly, nonatomic) BOOL needsSync;
@property (readonly, nonatomic) BOOL needsPrepare;

- (void)discard;
- (void)evictInEncoder:(id)a0;
- (void)evictInComputeEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;
- (void)synchronizeInComputeEncoder:(id)a0;
- (id)getResource;
- (id)getBuffer;
- (id)getTexture;
- (void)prepareInEncoder:(id)a0;
- (void)prepareInComputeEncoder:(id)a0;

@end
