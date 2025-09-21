@class NSString, OISFUCryptor;
@protocol SFUInputStream;

@interface OISFUCryptoInputStream : NSObject <SFUInputStream> {
    id<SFUInputStream> mBaseStream;
    OISFUCryptor *mCryptor;
    long long mOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canSeek;
- (void)dealloc;
- (void)seekToOffset:(long long)a0;
- (long long)offset;
- (void)close;
- (id)closeLocalStream;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initForDecryptionWithInputStream:(id)a0 key:(id)a1;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;

@end
