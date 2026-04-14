@class NSData, NSString;

@interface OADSound : OCDDelayedMedia {
    NSData *mSoundData;
    NSString *mName;
    int mSizeInBytes;
}

- (int)sizeInBytes;
- (void)setName:(id)a0;
- (BOOL)isLoaded;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (void)setSizeInBytes:(int)a0;
- (void)setSoundData:(id)a0;
- (id)soundData;

@end
