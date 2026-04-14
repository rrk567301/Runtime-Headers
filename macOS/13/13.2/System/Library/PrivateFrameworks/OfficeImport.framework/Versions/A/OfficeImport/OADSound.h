@class NSData, NSString;

@interface OADSound : OCDDelayedMedia {
    NSData *mSoundData;
    NSString *mName;
    int mSizeInBytes;
}

- (id)name;
- (id)description;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (BOOL)isLoaded;
- (void)setSizeInBytes:(int)a0;
- (int)sizeInBytes;
- (id)soundData;
- (void)setSoundData:(id)a0;

@end
