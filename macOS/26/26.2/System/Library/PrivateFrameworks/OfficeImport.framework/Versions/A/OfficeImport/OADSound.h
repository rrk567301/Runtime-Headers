@class NSData, NSString;

@interface OADSound : OCDDelayedMedia {
    NSData *mSoundData;
    NSString *mName;
    int mSizeInBytes;
}

- (BOOL)isLoaded;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (int)sizeInBytes;
- (void)setSizeInBytes:(int)a0;
- (void)setSoundData:(id)a0;
- (id)soundData;

@end
