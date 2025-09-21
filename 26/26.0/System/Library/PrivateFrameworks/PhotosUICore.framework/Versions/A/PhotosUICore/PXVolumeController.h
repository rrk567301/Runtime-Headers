@interface PXVolumeController : PXObservable <PXMutableVolumeController>

@property (readonly, nonatomic) BOOL isInSilentMode;

- (void)decreaseVolume;
- (id)init;
- (void)increaseVolume;
- (void)performChanges:(id /* block */)a0;
- (id)initWithIsInSilentMode:(BOOL)a0;
- (void)setIsInSilentMode:(BOOL)a0;

@end
