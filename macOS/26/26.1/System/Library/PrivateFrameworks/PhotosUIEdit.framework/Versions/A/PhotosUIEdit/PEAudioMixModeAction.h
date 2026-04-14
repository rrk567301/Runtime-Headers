@class NSString;

@interface PEAudioMixModeAction : PEEditAction

@property (retain, nonatomic) NSString *audioMixMode;

- (long long)actionType;
- (void).cxx_destruct;
- (void)applyToLoadResult:(id)a0 completion:(id /* block */)a1;

@end
