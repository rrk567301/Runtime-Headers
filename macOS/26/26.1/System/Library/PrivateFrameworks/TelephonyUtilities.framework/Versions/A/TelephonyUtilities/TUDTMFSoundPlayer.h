@interface TUDTMFSoundPlayer : NSObject

@property (copy, nonatomic) id /* block */ playSystemSoundHandler;

- (void).cxx_destruct;
- (void)attemptToPlaySoundType:(long long)a0;
- (BOOL)attemptToPlayKey:(unsigned char)a0;
- (id)init;

@end
