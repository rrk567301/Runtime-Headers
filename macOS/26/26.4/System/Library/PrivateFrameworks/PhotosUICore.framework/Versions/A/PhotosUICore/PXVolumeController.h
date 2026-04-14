@interface PXVolumeController : PXObservable <PXMutableVolumeController>

@property (readonly, nonatomic) BOOL isInSilentMode;

- (id)init;
- (void)decreaseVolume;
- (void)performChanges:(id /* block */)a0;
- (void)increaseVolume;
- (id)initWithIsInSilentMode:(BOOL)a0;
- (void)setIsInSilentMode:(BOOL)a0;

@end
