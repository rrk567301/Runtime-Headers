@interface PGResource : NSObject

@property (nonatomic) BOOL isGuestValid;
@property (nonatomic) BOOL isHostValid;
@property (readonly, nonatomic) BOOL supportsSynchronize;
@property (readonly, nonatomic) BOOL supportsDiscard;

- (void)discard;
- (void)evictInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;
- (void)synchronizeAndDiscardInEncoder:(id)a0;
- (id)getResource;
- (id)getBuffer;
- (id)getTexture;
- (void)prepareInEncoder:(id)a0;
- (void)replacePhysical:(id)a0;

@end
