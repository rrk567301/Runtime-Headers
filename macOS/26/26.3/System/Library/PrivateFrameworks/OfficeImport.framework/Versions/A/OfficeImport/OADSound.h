@class NSData, NSString;

@interface OADSound : OCDDelayedMedia {
    NSData *mSoundData;
    NSString *mName;
    int mSizeInBytes;
}

- (BOOL)isLoaded;
- (id)description;
- (int)sizeInBytes;
- (id)name;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (void)setSizeInBytes:(int)a0;
- (void)setSoundData:(id)a0;
- (id)soundData;

@end
