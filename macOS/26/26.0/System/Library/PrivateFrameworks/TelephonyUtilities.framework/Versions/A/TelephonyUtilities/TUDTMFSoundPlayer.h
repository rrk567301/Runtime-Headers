@interface TUDTMFSoundPlayer : NSObject

@property (copy, nonatomic) id /* block */ playSystemSoundHandler;

- (id)init;
- (BOOL)attemptToPlayKey:(unsigned char)a0;
- (void)attemptToPlaySoundType:(long long)a0;
- (void).cxx_destruct;

@end
