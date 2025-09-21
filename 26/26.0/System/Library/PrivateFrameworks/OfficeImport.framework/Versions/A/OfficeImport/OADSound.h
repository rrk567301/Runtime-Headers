@class NSData, NSString;

@interface OADSound : OCDDelayedMedia {
    NSData *mSoundData;
    NSString *mName;
    int mSizeInBytes;
}

- (BOOL)isLoaded;
- (void)setName:(id)a0;
- (int)sizeInBytes;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (void)setSizeInBytes:(int)a0;
- (void)setSoundData:(id)a0;
- (id)soundData;

@end
