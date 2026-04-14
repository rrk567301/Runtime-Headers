@interface TUDTMFSoundPlayer : NSObject

@property (copy, nonatomic) id /* block */ playSystemSoundHandler;

- (BOOL)attemptToPlayKey:(unsigned char)a0;
- (void).cxx_destruct;
- (void)attemptToPlaySoundType:(long long)a0;
- (id)init;

@end
