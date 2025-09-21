@interface TUDTMFSoundPlayer : NSObject

@property (copy, nonatomic) id /* block */ playSystemSoundHandler;

- (id)init;
- (void).cxx_destruct;
- (char)attemptToPlayKey:(unsigned char)a0;
- (void)attemptToPlaySoundType:(long long)a0;

@end
