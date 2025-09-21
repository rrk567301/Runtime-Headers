@class NSURL;

@interface AVAudioUnitDSPGraph : AVAudioUnit

@property (readonly, nonatomic) NSURL *dspGraphURL;
@property (readonly, nonatomic) NSURL *auProcessingStripURL;

- (id)init;
- (char)loadAudioDSPManager;
- (char)loadAudioUnitProcessingStripAtURL:(id)a0 error:(id *)a1;
- (char)loadDSPGraphAtURL:(id)a0 error:(id *)a1;

@end
